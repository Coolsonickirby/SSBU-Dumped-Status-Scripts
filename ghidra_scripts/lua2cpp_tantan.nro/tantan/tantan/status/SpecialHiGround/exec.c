
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiGround_exec(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CAgent *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [16];
  undefined auStack192 [32];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_GROUND_ANGLE_RAD);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_CAN_INPUT_GROUND_ANGLE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar3 & 1) != 0) {
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0xc10e782e9);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    pLVar4 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,uVar3,(ulong)pLVar4);
    lib::L2CValue::L2CValue(aLStack128,fVar8);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)0x1a;
    pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(pLVar5,pLVar7);
    pLVar7 = (L2CValue *)0x1b;
    pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
    lib::L2CAgent::math_abs(pLVar5,pLVar7);
    lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)(auStack192 + 0x10));
    uVar3 = lib::L2CValue::operator__(aLStack128,(L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    if ((uVar3 & 1) != 0) {
      pLVar5 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CValue::operator_(pLVar7,aLStack80);
      lib::L2CAgent::math_atan(pLVar5,(L2CValue *)auStack160,pLVar4);
      pLVar4 = (L2CValue *)(auStack160 + 0x10);
      lib::L2CValue::operator_(aLStack112,pLVar4);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar4);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,0xcaf26adce);
      pLVar4 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
      uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,(ulong)pLVar4,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar8);
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar4);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)auStack208,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack224,0x16d6008cb1);
      pLVar4 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack208);
      uVar3 = lib::L2CValue::as_integer(aLStack224);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,(ulong)pLVar4,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar8);
      lib::L2CAgent::math_rad((L2CAgent *)auStack192,pLVar4);
      lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::L2CValue(aLStack224,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack240,0x1577fbbe01);
      pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack224);
      uVar3 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,(ulong)pLVar4,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar8);
      lib::L2CAgent::math_rad((L2CAgent *)auStack208,pLVar4);
      lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),(L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      uVar3 = lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack160);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::operator_(aLStack112,(L2CValue *)auStack160);
      }
      uVar3 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack112);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack192 + 0x10));
      }
      lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_GROUND_ANGLE_RAD);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_GROUND_ANGLE_RAD);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar4);
  lib::L2CValue::L2CValue(aLStack80,90.0);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_GROUND_MOTION_ROT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0xd889df59b);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = aLStack128;
  lib::L2CValue::operator_(aLStack112,pLVar4);
  lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar4);
  uVar3 = lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator_(aLStack80,(L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::operator_((L2CValue *)auStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)(auStack160 + 0x10));
    }
  }
  lib::L2CValue::operator_(aLStack128,(L2CValue *)auStack160);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0x11a2bbf388);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack80);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (this->moduleAccessor,(ulong)pLVar4,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar4);
  uVar3 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator_(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10));
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack192 + 0x10));
    }
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_GROUND_MOTION_ROT);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_7100016f00(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

