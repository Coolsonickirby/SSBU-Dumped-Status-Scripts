
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPzenigame::status::SpecialNCharge_end(L2CFighterPzenigame *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PZENIGAME_STATUS_KIND_SPECIAL_N_SHOOT);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ESCAPE_F);
        uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE_B);
          uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE);
            uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_GUARD_ON);
              uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
              lib::L2CValue::_L2CValue(aLStack64);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
                uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
                lib::L2CValue::_L2CValue(aLStack64);
                if ((uVar4 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE_AIR);
                  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
                  lib::L2CValue::_L2CValue(aLStack64);
                  if ((uVar4 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FLY);
                    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
                    lib::L2CValue::_L2CValue(aLStack64);
                    if ((uVar4 & 1) == 0) {
                      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_JUMP_AERIAL);
                      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
                      lib::L2CValue::_L2CValue(aLStack64);
                      if ((uVar4 & 1) == 0) {
                        lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT_REMOVE_COMMON);
                        lib::L2CValue::L2CValue(aLStack112,0xaec2db62e);
                        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
                        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
                        app::sv_module_access::effect(this->luaStateAgent);
                        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
                        lib::L2CValue::_L2CValue(aLStack64);
                        lib::L2CValue::_L2CValue(aLStack112);
                        lib::L2CValue::_L2CValue(aLStack96);
                        lib::L2CValue::L2CValue(aLStack96,0);
                        lib::L2CValue::L2CValue
                                  (aLStack112,
                                   _FIGHTER_PZENIGAME_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE);
                        iVar1 = lib::L2CValue::as_integer(aLStack96);
                        iVar2 = lib::L2CValue::as_integer(aLStack112);
                        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
                        lib::L2CValue::_L2CValue(aLStack112);
                        lib::L2CValue::_L2CValue(aLStack96);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

