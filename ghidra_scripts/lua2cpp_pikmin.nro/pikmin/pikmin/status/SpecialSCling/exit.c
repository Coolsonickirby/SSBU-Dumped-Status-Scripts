
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialSCling_exit
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  uint uVar10;
  float fVar11;
  long lVar12;
  undefined8 uVar13;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x26b5068297);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_STATUS_KIND_NONE);
  uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_100,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_S_CLING_WORK_FLAG_IS_EXIT
              );
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    bVar1 = app::lua_bind::LinkModule__is_model_constraint_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      lib::L2CValue::L2CValue(aLStack272,0x570211ebd);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      HVar5 = lib::L2CValue::as_hash(aLStack272);
      uVar7 = lib::L2CValue::as_number(this_00);
      lVar12 = lib::L2CValue::as_number(this_01);
      uVar10 = lib::L2CValue::as_number(this_02);
      local_90 = uVar7 & 0xffffffff | lVar12 << 0x20;
      uStack136 = (ulong)uVar10;
      app::lua_bind::ModelModule__joint_global_position_impl
                (this->moduleAccessor,HVar5,(Vector3f *)&local_90,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
      lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
      lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
      lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_100);
      lib::L2CValue::operator_(pLVar8,aLStack240);
      lib::L2CValue::operator_(pLVar9,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      fVar11 = 0.0;
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x162d277af);
      uVar13 = app::lua_bind::LinkModule__get_model_constraint_target_node_position_impl
                         (this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar13);
      lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue(aLStack224,fVar11);
      lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_100);
      lib::L2CValue::operator_(pLVar8,aLStack240);
      lib::L2CValue::operator_(pLVar9,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
      fVar11 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar11);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      uVar7 = lib::L2CValue::as_number(pLVar6);
      lVar12 = lib::L2CValue::as_number(pLVar8);
      uVar10 = lib::L2CValue::as_number(pLVar9);
      local_100 = uVar7 & 0xffffffff | lVar12 << 0x20;
      uStack248 = (ulong)uVar10;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_100);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x18cdc1683);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      lib::L2CValue::operator_(pLVar6,pLVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
      uVar7 = lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_100,1.0);
        fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_100);
        app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar11);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_100,-1.0);
        fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_100);
        app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar11);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_LINK_NO_CONSTRAINT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_100,_WEAPON_LINK_NO_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
      app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_100);
    app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar10 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar3,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

