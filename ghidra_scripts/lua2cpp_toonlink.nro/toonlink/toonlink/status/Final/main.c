
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterToonlink::status::Final_main(L2CFighterToonlink *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  Hash40 HVar4;
  Hash40 HVar5;
  uint uVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack272,0x201bc9217c);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,false);
  bVar1 = lib::L2CValue::as_bool(aLStack272);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_MOT_INHERIT);
  iVar2 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack272);
  FUN_7100010b90(this);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  lib::L2CValue::L2CValue(aLStack288,0x5ecd55cc6);
  lib::L2CValue::L2CValue(aLStack304,0x54f934137);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  HVar4 = lib::L2CValue::as_hash(aLStack288);
  HVar5 = lib::L2CValue::as_hash(aLStack304);
  uVar8 = lib::L2CValue::as_number(this_02);
  lVar9 = lib::L2CValue::as_number(this_03);
  uVar6 = lib::L2CValue::as_number(this_04);
  local_90 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack136 = (ulong)uVar6;
  app::lua_bind::MotionModule__calc_joint_impl
            (this->moduleAccessor,HVar4,HVar5,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue(aLStack272,(float)local_90);
  lib::L2CValue::L2CValue(aLStack256,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack240,(float)uStack136);
  lib::L2CValue::operator_(pLVar3,aLStack272);
  lib::L2CValue::operator_(this_00,aLStack256);
  lib::L2CValue::operator_(this_01,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  uVar8 = lib::L2CValue::operator_(pLVar3,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar8 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack272,-1.0);
    lib::L2CValue::operator_(pLVar3,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::operator_(pLVar3,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::operator_(pLVar3,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_FINAL_DX);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar2 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::operator_(pLVar3,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_FINAL_DY);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar2 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_BOOMERANG);
  iVar2 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack272,Final_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

