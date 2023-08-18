
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPitb::status::FinalEnd_main(L2CFighterPitb *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  SituationKind SVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar4);
  lib::L2CValue::L2CValue(aLStack144,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar4[2]);
  FUN_7100003320(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PIT_STATUS_FINAL_FLOAT_POS_X);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PIT_STATUS_FINAL_FLOAT_POS_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
  uVar9 = lib::L2CValue::as_number(pLVar5);
  uVar10 = lib::L2CValue::as_number(this_00);
  uVar11 = lib::L2CValue::as_number(this_01);
  local_60 = CONCAT44(uVar10,uVar9);
  uStack88 = (ulong)uVar11;
  app::lua_bind::PostureModule__init_pos_impl(this->moduleAccessor,(Vector3f *)&local_60,true,true);
  lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PIT_STATUS_FINAL_FLAG_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  uVar6 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  SVar3 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::StatusModule__set_situation_kind_impl(this->moduleAccessor,SVar3,false);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
  uVar6 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb7be8d394);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PIT_STATUS_FINAL_INT_MOTION_KIND_GROUND);
    lVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf7eeeef62);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PIT_STATUS_FINAL_INT_MOTION_KIND_AIR);
    lVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb81e7eef7);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PIT_STATUS_FINAL_INT_MOTION_KIND_GROUND);
    lVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf84e1d201);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PIT_STATUS_FINAL_INT_MOTION_KIND_AIR);
    lVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PIT_STATUS_FINAL_INT_MOTION_KIND_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,lVar7);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PIT_STATUS_FINAL_INT_MOTION_KIND_AIR);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack208,lVar7);
  lib::L2CValue::L2CValue(aLStack240,false);
  FUN_7100015220(this,&local_60,aLStack208,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,FinalEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

