
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootJumpSquat_exit(L2CFighterBuddy *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack112,pLVar2);
  FUN_71000071a0(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack144,pLVar2);
  FUN_7100007320(aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      FUN_7100006d00(this);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100004aa0;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,HVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  uVar3 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1a793b0b2f);
    uVar3 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_7100004a3c;
    FUN_7100006d00(this);
  }
  else {
LAB_7100004a3c:
    lib::L2CValue::L2CValue(aLStack80,-1.0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_FLOAT_UPPER_FRAME);
    fVar5 = (float)lib::L2CValue::as_number(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
LAB_7100004aa0:
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

