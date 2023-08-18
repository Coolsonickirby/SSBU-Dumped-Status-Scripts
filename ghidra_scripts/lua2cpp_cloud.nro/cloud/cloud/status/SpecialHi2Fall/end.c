
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialHi2Fall_end(L2CFighterCloud *this,L2CValue *return_value)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_KIND_SPECIAL_HI2_LANDING);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_EFFECT_SUB_ATTRIBUTE_CONCLUDE_STATUS);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar1 = lib::L2CValue::as_integer(aLStack80);
    uVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::EffectModule__remove_all_after_image_impl(this->moduleAccessor,uVar1,uVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lua2cpp::L2CFighterCommon::status_end_fall_special(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

