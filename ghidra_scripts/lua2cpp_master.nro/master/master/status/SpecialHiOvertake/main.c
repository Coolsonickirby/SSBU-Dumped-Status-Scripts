
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHiOvertake_main(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Hash40 HVar7;
  ulong uVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  undefined8 uStack104;
  
  lib::L2CValue::L2CValue(aLStack144,0x17f64731c5);
  lib::L2CValue::L2CValue(aLStack160,aLStack144);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack208,aLStack144);
  lib::L2CValue::L2CValue(aLStack224,aLStack160);
  lib::L2CValue::L2CValue(aLStack240,aLStack176);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_HIT_OBJECT_ID)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack320,iVar3);
  uVar4 = lib::L2CValue::as_integer(aLStack320);
  app::lua_bind::CatchModule__set_catch_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack320,0x31ed91fca);
  HVar7 = lib::L2CValue::as_hash(aLStack320);
  app::lua_bind::LinkModule__set_model_constraint_joint_impl(this->moduleAccessor,HVar7);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,0x54f934137);
  HVar7 = lib::L2CValue::as_hash(aLStack320);
  app::lua_bind::LinkModule__set_model_constraint_target_joint_impl(this->moduleAccessor,HVar7);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue
            (aLStack320,_CONSTRAINT_FLAG_ORIENTATION_POSTURE_ROT | CONSTRAINT_FLAG_POSITION);
  uVar4 = lib::L2CValue::as_integer(aLStack320);
  app::lua_bind::LinkModule__set_model_constraint_flag_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack320);
  uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,uVar4);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack320,0x50000000);
  uVar8 = lib::L2CValue::operator__(aLStack256,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  if ((uVar8 & 1) != 0) goto LAB_710001f718;
  uVar4 = lib::L2CValue::as_integer(aLStack256);
  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack272,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_ATTACK_INT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,pvVar9);
  }
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack272);
  iVar3 = app::lua_bind::GroundModule__get_correct_impl(pBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
  lib::L2CValue::L2CValue(aLStack320,_GROUND_CORRECT_KIND_NONE);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar8 & 1) == 0) {
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack272);
    uVar13 = app::lua_bind::GroundModule__get_center_pos_impl(pBVar10);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack320);
    lib::L2CValue::L2CValue(aLStack128,aLStack304);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack288,0x1fbdb2615);
    uVar8 = lib::L2CValue::as_number(this_00);
    uVar4 = lib::L2CValue::as_number(this_01);
    local_70 = uVar8 & 0xffffffff | (ulong)uVar4 << 0x20;
    uStack104 = 0;
    app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_70)
    ;
    lib::L2CValue::_L2CValue(aLStack288);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x54f934137);
  lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack288,true);
  lib::L2CValue::L2CValue(aLStack336,FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
  lib::L2CValue::L2CValue(aLStack368,FIGHTER_STATUS_THROW_WORK_FLOAT_MOTION_RATE);
  HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_70);
  HVar11 = lib::L2CValue::as_hash(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack288);
  iVar3 = lib::L2CValue::as_integer(aLStack336);
  iVar5 = lib::L2CValue::as_integer(aLStack352);
  iVar6 = lib::L2CValue::as_integer(aLStack368);
  app::lua_bind::LinkModule__send_event_nodes_throw_impl
            (this->moduleAccessor,HVar7,HVar11,(bool)(bVar1 & 1),iVar3,iVar5,iVar6);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_TARGET_HI_DAMAGE);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_TARGET_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack352);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    uVar8 = lib::L2CValue::operator__(aLStack336,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar8 & 1) != 0) goto LAB_710001f6e0;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack288);
LAB_710001f6e0:
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_STATUS_THROWN_WORK_FLAG_DISABLE_PASSIVE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack272);
    app::lua_bind::WorkModule__on_flag_impl(pBVar10,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::_L2CValue(aLStack272);
LAB_710001f718:
  lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_ATTACK_MUL);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar12);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
  app::lua_bind::AttackModule__set_power_mul_status_impl(this->moduleAccessor,fVar12);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,SpecialHiOvertake_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

