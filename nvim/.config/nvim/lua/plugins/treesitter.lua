return {
    {
        "nvim-treesitter/nvim-treesitter",
        build = ":TSUpdate",
        config = function()
            local config = require("nvim-treesitter.configs")

            config.setup({
                ensure_installed = { "lua", "c", "javascript" },
                auto_install = true,
                highlight = { enable = true },
                indent = { enable = false }
            })
        end
    }
}
