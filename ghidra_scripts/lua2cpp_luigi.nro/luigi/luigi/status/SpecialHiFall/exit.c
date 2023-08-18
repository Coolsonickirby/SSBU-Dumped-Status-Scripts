
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLuigi::status::SpecialHiFall_exit(L2CFighterLuigi *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,1.0);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar4,true);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_KIND_SPECIAL_HI_FALL);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xc016dd1c6);
    HVar3 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

