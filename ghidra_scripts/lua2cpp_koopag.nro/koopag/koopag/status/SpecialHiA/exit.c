
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopag::status::SpecialHiA_exit(L2CFighterKoopag *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_KIND_SPECIAL_HI_G);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x149b8062d6);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    fVar5 = (float)lib::L2CValue::as_number(aLStack176);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar2 = aLStack176;
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x149b8062d6);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    fVar5 = (float)lib::L2CValue::as_number(aLStack176);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    fVar5 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x15d5b1f480);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    uVar3 = lib::L2CValue::operator_(aLStack144,aLStack112);
    if ((uVar3 & 1) == 0) goto LAB_71000027fc;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_FLAG_BONUS);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x12e931f4e9);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0x15bce55fb3);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    uVar3 = lib::L2CValue::operator_(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_71000027fc;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_SPECIAL_HI_FLAG3);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    pLVar2 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar2);
LAB_71000027fc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

