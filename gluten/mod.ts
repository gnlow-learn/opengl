import {
    createWindow,
    getProcAddress,
    mainloop,
} from "https://deno.land/x/dwm@0.3.4/mod.ts"
import * as gl from "https://deno.land/x/gluten@0.1.7/api/gl4.6.ts"

const window = createWindow({
    title: "DenoGL",
    width: 800,
    height: 600,
    resizable: true,
    glVersion: "v3.2",
    gles: true,
})

gl.load(getProcAddress)

addEventListener("resize", e => {
    gl.Viewport(0, 0, e.width, e.height)
})

gl.ClearColor(0, 1, 0, 1)

await mainloop(() => {
    gl.Clear(gl.COLOR_BUFFER_BIT)
    window.swapBuffers()
})
