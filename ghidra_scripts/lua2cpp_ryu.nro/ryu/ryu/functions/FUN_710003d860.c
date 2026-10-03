
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003d860(L2CAgent *param_1)

{
  BattleObject **this;
  byte bVar1;
  HitStatus HVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = &param_1[2].battleObject;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL_JUMP);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL_LANDING);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL_HIT);
      uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL2_FALL);
        uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL2_AIR_END);
          uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar4 & 1) == 0) {
            pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL2_LANDING);
            uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,true);
              bVar1 = lib::L2CValue::as_bool(aLStack64);
              app::lua_bind::ItemModule__set_change_status_event_impl
                        (param_1->moduleAccessor,(bool)(bVar1 & 1));
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
              HVar2 = lib::L2CValue::as_integer(aLStack64);
              app::lua_bind::HitModule__set_whole_impl(param_1->moduleAccessor,HVar2,0);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,0x1e0aba2d68);
              lib::L2CAgent::clear_lua_stack(param_1);
              lib::L2CAgent::push_lua_stack(param_1,aLStack64);
              app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
              lib::L2CAgent::pop_lua_stack(param_1,1);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack64);
            }
          }
        }
      }
    }
  }
  return;
}

