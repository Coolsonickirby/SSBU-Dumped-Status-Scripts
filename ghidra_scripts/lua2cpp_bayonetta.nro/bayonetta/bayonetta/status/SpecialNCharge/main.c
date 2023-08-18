
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialNCharge_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x12550f52a8);
  lib::L2CValue::L2CValue(aLStack112,0x12b2b77faf);
  FUN_710002b500(aLStack80,this,aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_G);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0x16d87102a9);
  lib::L2CValue::L2CValue(aLStack144,0x163fc92fae);
  FUN_710002b500(aLStack80,this,aLStack128,aLStack144);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_A);
  lVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLOAT_MOTION_RATE);
  fVar7 = (float)lib::L2CValue::as_number(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack176,0xc459c4171);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_CANCEL_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,false);
    FUN_710002d2f0(aLStack160,this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_710002d500);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialNCharge_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

