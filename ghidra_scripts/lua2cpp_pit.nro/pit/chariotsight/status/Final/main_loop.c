
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPitChariotsight::status::Final_main_loop
          (L2CWeaponPitChariotsight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  Hash40 HVar5;
  L2CAgent *this_00;
  L2CValue *pLVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined auStack368 [32];
  undefined8 local_150;
  ulong uStack328;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined8 local_110;
  ulong uStack264;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_110,_CONTROL_PAD_BUTTON_ATTACK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_150);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_150);
      lib::L2CValue::_L2CValue(aLStack96);
      goto LAB_710002417c;
    }
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_PIT_CHARIOTSIGHT_INSTANCE_WORK_ID_INT_TARGET_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack160,0x12d424fc65);
    lib::L2CValue::L2CValue(aLStack176,0x153ec7dd07);
    uVar13 = lib::L2CValue::as_integer(aLStack160);
    uVar9 = lib::L2CValue::as_integer(aLStack176);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar13,uVar9);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    uVar13 = lib::L2CValue::operator__(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    if ((uVar13 & 1) == 0) goto LAB_7100024848;
  }
  else {
LAB_710002417c:
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  }
  app::LinkEventPos::new_l2c_table();
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack224,0x1858c80642);
  lib::L2CValue::operator_(pLVar4,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_110,
             _WEAPON_PIT_CHARIOTSIGHT_INSTANCE_WORK_ID_FLOAT_CAMERA_ZOOM_POS_X);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,fVar10);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x4f63695cd);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_110,
             _WEAPON_PIT_CHARIOTSIGHT_INSTANCE_WORK_ID_FLOAT_CAMERA_ZOOM_POS_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_110);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,fVar10);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x4f63695cd);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,0x4ef3e3778);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_150);
  uVar13 = lib::L2CValue::as_number(aLStack96);
  lVar14 = lib::L2CValue::as_number(aLStack144);
  uVar11 = lib::L2CValue::as_number(aLStack160);
  local_110 = uVar13 & 0xffffffff | lVar14 << 0x20;
  uStack264 = (ulong)uVar11;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar5,(Vector3f *)&local_110,true);
  lib::L2CValue::L2CValue(aLStack224,(float)local_110);
  lib::L2CValue::L2CValue(aLStack208,local_110._4_4_);
  fVar10 = 0.0;
  lib::L2CValue::L2CValue(aLStack192,(float)uStack264);
  FUN_7100003320(aLStack128,this,aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  bVar1 = app::sv_information::is_flat_stage();
  lib::L2CValue::L2CValue((L2CValue *)&local_110,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_110);
  lib::L2CValue::_L2CValue((L2CValue *)&local_110);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0x4ef3e3778);
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::L2CValue(aLStack176,0);
    lib::L2CValue::L2CValue(aLStack288,0);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    uVar13 = lib::L2CValue::as_number(aLStack160);
    lVar14 = lib::L2CValue::as_number(aLStack176);
    uVar11 = lib::L2CValue::as_number(aLStack288);
    local_150 = uVar13 & 0xffffffff | lVar14 << 0x20;
    uStack328 = (ulong)uVar11;
    app::lua_bind::ModelModule__joint_global_offset_from_top_impl
              (this->moduleAccessor,HVar5,(Vector3f *)&local_150);
    lib::L2CValue::L2CValue((L2CValue *)&local_110,(float)local_150);
    lib::L2CValue::L2CValue(aLStack256,local_150._4_4_);
    fVar10 = 0.0;
    lib::L2CValue::L2CValue(aLStack240,(float)uStack328);
    FUN_7100003320(aLStack96,this,&local_110);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_110);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    fVar12 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar12);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x162d277af);
    fVar12 = (float)app::lua_bind::BattleObjectWorld__scale_z_impl
                              (FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_LIGHT);
    lib::L2CValue::L2CValue(aLStack176,fVar12);
    lib::L2CValue::operator_(pLVar4,aLStack176);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_150);
    lib::L2CValue::_L2CValue((L2CValue *)&local_150);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  uVar15 = app::sv_camera_manager::get_internal_pos();
  lib::L2CValue::L2CValue((L2CValue *)&local_150,(float)uVar15);
  lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar15 >> 0x20));
  lib::L2CValue::L2CValue(aLStack304,fVar10);
  FUN_7100003320(aLStack144,this,&local_150);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_150);
  lib::L2CValue::operator_(aLStack128,aLStack144);
  lua2cpp::L2CFighterBase::Vector3__normalize(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar4 = (L2CValue *)0x162d277af;
  this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CAgent::math_abs(this_00,pLVar4);
  lib::L2CValue::L2CValue(aLStack96,1e-05);
  uVar13 = lib::L2CValue::operator_(aLStack96,aLStack288);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar13 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x162d277af);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    lib::L2CValue::operator_(pLVar4,pLVar6);
    lib::L2CAgent::math_abs((L2CAgent *)auStack368,pLVar6);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)(auStack368 + 0x10));
    lib::L2CValue::operator_(aLStack144,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x4f63695cd);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(pLVar6,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x4f63695cd);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(pLVar6,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar6,pLVar4);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)(auStack368 + 0x10),_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack368 + 0x10));
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x11f63699bf);
  pcVar7 = (code *)lib::L2CValue::as_pointer(pLVar4);
  plVar8 = (long *)(*pcVar7)();
  app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar8,aLStack112);
  app::lua_bind::LinkModule__send_event_parents_struct_impl
            (this->moduleAccessor,iVar3,(LinkEvent *)plVar8);
  app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar8);
  lib::L2CValue::L2CValue(aLStack288,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  (**(code **)(*plVar8 + 8))(plVar8);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack368 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100024848:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

