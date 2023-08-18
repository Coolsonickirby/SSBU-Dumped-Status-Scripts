
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessYoyohead::status::Takeup_main(L2CWeaponNessYoyohead *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar10;
  BattleObjectModuleAccessor *pBVar11;
  float fVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
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
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_NESS_YOYO_HEAD_INSTANCE_WORK_ID_FLAG_ATTACK_HI);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack256,0xa86d04046);
    fVar12 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar12);
    HVar5 = lib::L2CValue::as_hash(aLStack256);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar5,fVar12,1.0,0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,0xa5598d745);
    fVar12 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar12);
    HVar5 = lib::L2CValue::as_hash(aLStack256);
    fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    app::lua_bind::MotionModule__change_motion_inherit_frame_impl
              (this->moduleAccessor,HVar5,fVar12,1.0,0.0,false,false);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack256);
  app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,0x6dec97c81);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  HVar5 = lib::L2CValue::as_hash(aLStack272);
  uVar14 = lib::L2CValue::as_number(pLVar9);
  lVar15 = lib::L2CValue::as_number(this_00);
  uVar13 = lib::L2CValue::as_number(this_01);
  local_90 = uVar14 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar13;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar5,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue(aLStack256,(float)local_90);
  lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
  fVar12 = 0.0;
  lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
  lib::L2CValue::operator_(pLVar6,aLStack256);
  lib::L2CValue::operator_(pLVar7,aLStack240);
  lib::L2CValue::operator_(pLVar8,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack256,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x6dec97c81);
  lib::L2CValue::L2CValue(aLStack272,0x54f934137);
  lib::L2CValue::L2CValue
            (aLStack288,
             _CONSTRAINT_FLAG_OFFSET_TRANSLATE | CONSTRAINT_FLAG_POSITION |
             _CONSTRAINT_FLAG_ORIENTATION);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  HVar10 = lib::L2CValue::as_hash(aLStack272);
  uVar13 = lib::L2CValue::as_integer(aLStack288);
  app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
            (this->moduleAccessor,iVar3,HVar5,HVar10,uVar13,true);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  uVar14 = lib::L2CValue::as_number(pLVar7);
  lVar15 = lib::L2CValue::as_number(pLVar8);
  uVar13 = lib::L2CValue::as_number(pLVar9);
  local_90 = uVar14 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar13;
  uVar16 = app::WeaponSpecializer_NessYoyoHead::get_takeup_constraint_offset
                     (pBVar11,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue(aLStack256,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::L2CValue(aLStack224,fVar12);
  FUN_7100022a10(aLStack272,this,aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
  uVar14 = lib::L2CValue::as_number(pLVar6);
  lVar15 = lib::L2CValue::as_number(pLVar7);
  uVar13 = lib::L2CValue::as_number(pLVar8);
  local_90 = uVar14 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar13;
  app::lua_bind::LinkModule__set_constraint_translate_offset_impl
            (this->moduleAccessor,(Vector3f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,5);
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_INT_TAKEUP_INTP_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  iVar4 = lib::L2CValue::as_integer(aLStack288);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,Takeup_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

