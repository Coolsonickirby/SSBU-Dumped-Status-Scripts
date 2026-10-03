
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000fed0(L2CAgent *param_1)

{
  BattleObject **this;
  HitStatus HVar1;
  uint uVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = &param_1[2].battleObject;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_HIT);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_MOVE);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_ATTACK);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_FALL);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_IKE_STATUS_KIND_FINAL_END);
          uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
            HVar1 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::HitModule__set_whole_impl(param_1->moduleAccessor,HVar1,0);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_EFFECT_SUB_ATTRIBUTE_NONE);
            lib::L2CValue::L2CValue(aLStack80,2);
            uVar2 = lib::L2CValue::as_integer(aLStack64);
            uVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::EffectModule__remove_all_after_image_impl
                      (param_1->moduleAccessor,uVar2,uVar3);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,0x1e0aba2d68);
            lib::L2CAgent::clear_lua_stack(param_1);
            lib::L2CAgent::push_lua_stack(param_1,aLStack64);
            app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
            lib::L2CAgent::pop_lua_stack(param_1,1);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack64);
          }
        }
      }
    }
  }
  return;
}

