
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterToonlink::status::AttackS4_pre(L2CFighterToonlink *this,L2CValue *return_value)

{
  ulong uVar1;
  float fVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack80,
             FIGHTER_LOG_MASK_FLAG_ATTACK_KIND_ATTACK_S4 |
             FIGHTER_LOG_MASK_FLAG_ACTION_CATEGORY_ATTACK | _FIGHTER_LOG_MASK_FLAG_HAJIKI);
  fVar2 = (float)app::lua_bind::DamageModule__damage_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack96,fVar2);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar1 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar1 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_MASK_FLAG_SHOOT);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack64,aLStack80);
  lua2cpp::L2CFighterCommon::status_pre_AttackS4_Common(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

