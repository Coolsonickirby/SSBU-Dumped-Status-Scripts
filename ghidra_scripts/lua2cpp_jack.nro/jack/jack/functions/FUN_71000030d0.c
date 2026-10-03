
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000030d0(L2CFighterJack *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_INT_WAZA_CUSTOMIZE_TO);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_1);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_S_2);
    uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_1);
      uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_HI_2);
        uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_1);
          uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar2 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_WAZA_CUSTOMIZE_TO_SPECIAL_LW_2);
            uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar2 & 1) == 0) goto LAB_71000035f0;
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
            lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
            lua2cpp::L2CAgentBase::sv_set_status_func
                      ((L2CAgentBase *)this,aLStack64,aLStack96,FUN_71000064c0);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
            lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
            lua2cpp::L2CAgentBase::sv_set_status_func
                      ((L2CAgentBase *)this,aLStack64,aLStack96,FUN_7100006910);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
            lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
            lua2cpp::L2CAgentBase::sv_set_status_func
                      ((L2CAgentBase *)this,aLStack64,aLStack96,FUN_7100006ed0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
            lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
            lua2cpp::L2CAgentBase::sv_set_status_func
                      ((L2CAgentBase *)this,aLStack64,aLStack96,
                       L2CFighterJack::status::SpecialLw_pre);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
            lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
            lua2cpp::L2CAgentBase::sv_set_status_func
                      ((L2CAgentBase *)this,aLStack64,aLStack96,
                       L2CFighterJack::status::SpecialLw_main);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_LW);
            lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
            lua2cpp::L2CAgentBase::sv_set_status_func
                      ((L2CAgentBase *)this,aLStack64,aLStack96,
                       L2CFighterJack::status::SpecialLw_end);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
          lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
          lua2cpp::L2CAgentBase::sv_set_status_func
                    ((L2CAgentBase *)this,aLStack64,aLStack96,FUN_71000049b0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
          lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
          lua2cpp::L2CAgentBase::sv_set_status_func
                    ((L2CAgentBase *)this,aLStack64,aLStack96,FUN_7100004df0);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
          lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
          lua2cpp::L2CAgentBase::sv_set_status_func
                    ((L2CAgentBase *)this,aLStack64,aLStack96,FUN_7100005540);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
          lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
          lua2cpp::L2CAgentBase::sv_set_status_func
                    ((L2CAgentBase *)this,aLStack64,aLStack96,FUN_7100005680);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
        lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
        lua2cpp::L2CAgentBase::sv_set_status_func
                  ((L2CAgentBase *)this,aLStack64,aLStack96,L2CFighterJack::status::SpecialHi_pre);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
        lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
        lua2cpp::L2CAgentBase::sv_set_status_func
                  ((L2CAgentBase *)this,aLStack64,aLStack96,L2CFighterJack::status::SpecialHi_main);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
        lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
        lua2cpp::L2CAgentBase::sv_set_status_func
                  ((L2CAgentBase *)this,aLStack64,aLStack96,L2CFighterJack::status::SpecialHi_end);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_SPECIAL_HI);
        lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_EXEC_STATUS);
        lua2cpp::L2CAgentBase::sv_delete_status_func((L2CAgentBase *)this,aLStack64,aLStack96);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
      lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
      lua2cpp::L2CAgentBase::sv_set_status_func
                ((L2CAgentBase *)this,aLStack64,aLStack96,FUN_71000039a0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
    lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
    lua2cpp::L2CAgentBase::sv_set_status_func
              ((L2CAgentBase *)this,aLStack64,aLStack96,L2CFighterJack::status::SpecialS_main);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_71000035f0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

