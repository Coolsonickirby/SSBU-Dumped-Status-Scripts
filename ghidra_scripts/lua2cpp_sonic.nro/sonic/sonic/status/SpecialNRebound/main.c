
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSonic::status::SpecialNRebound_main(L2CFighterSonic *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  uint uVar5;
  Hash40 HVar6;
  L2CTable *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  L2CValue *this_05;
  BattleObjectModuleAccessor *pBVar11;
  Hash40 HVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  long lVar18;
  int in_stack_fffffffffffffe14;
  undefined auStack416 [16];
  undefined auStack400 [32];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  ulong local_130;
  ulong uStack296;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  ulong local_b0;
  ulong uStack168;
  undefined8 local_a0;
  ulong uStack152;
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_130,_FIGHTER_INSTANCE_WORK_ID_FLAG_FORCE_LOUPE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_130);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_130);
  lib::L2CValue::L2CValue((L2CValue *)&local_130,0x11d0a7c13e);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,false);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_130);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_b0);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar6,fVar15,fVar16,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_130);
  lib::L2CValue::L2CValue((L2CValue *)&local_130,GROUND_CORRECT_KIND_AIR);
  GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_130);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_130);
  lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,
             _GROUND_TOUCH_FLAG_LEFT | GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_UP);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_130,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_130);
  lib::L2CValue::_L2CValue((L2CValue *)&local_130);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack208,0x92a3b5b68);
    lib::L2CValue::L2CValue(aLStack224,0x31ed91fca);
    HVar6 = lib::L2CValue::as_hash(aLStack208);
    HVar12 = lib::L2CValue::as_hash(aLStack224);
    uStack296 = _LUA_SCRIPT_LINE_STATUS_SYSTEM;
    local_130 = LUA_SCRIPT_LINE_SYSTEM_POST;
    local_b0 = local_130;
    uStack168 = uStack296;
    local_a0 = local_130;
    uStack152 = uStack296;
    local_90 = local_130;
    uStack136 = uStack296;
    uVar5 = app::lua_bind::EffectModule__req_on_joint_impl
                      (this->moduleAccessor,HVar6,HVar12,(Vector3f *)&local_130,
                       (Vector3f *)&local_90,1.0,(Vector3f *)&local_a0,(Vector3f *)&local_b0,false,0
                       ,in_stack_fffffffffffffe14,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,uVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_b0);
    pLVar7 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar7,0);
    lib::L2CValue::L2CValue(aLStack208,pLVar7);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,0);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,0);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    pLVar7 = (L2CTable *)operator_new(0x48);
    lib::L2CTable::L2CTable(pLVar7,0);
    lib::L2CValue::L2CValue(aLStack224,pLVar7);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,0);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,0);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_130);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    this_05 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_01);
    uVar17 = lib::L2CValue::as_number(this_02);
    uVar5 = lib::L2CValue::as_number(this_03);
    local_90 = uVar17 & 0xffffffff | (ulong)uVar5 << 0x20;
    uStack136 = 0;
    uVar17 = lib::L2CValue::as_number(this_04);
    uVar5 = lib::L2CValue::as_number(this_05);
    local_a0 = uVar17 & 0xffffffff | (ulong)uVar5 << 0x20;
    uStack152 = 0;
    puVar13 = &local_a0;
    uVar5 = app::FighterUtil::get_air_ground_touch_info
                      (pBVar11,(Vector2f *)&local_90,(Vector2f *)puVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_130,uVar5);
    lib::L2CValue::L2CValue(aLStack288,(float)local_90);
    lib::L2CValue::L2CValue(aLStack272,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack256,(float)local_a0);
    lib::L2CValue::L2CValue(aLStack240,local_a0._4_4_);
    lib::L2CValue::operator_((L2CValue *)&local_b0,(L2CValue *)&local_130);
    lib::L2CValue::operator_(pLVar8,aLStack288);
    lib::L2CValue::operator_(pLVar9,aLStack272);
    lib::L2CValue::operator_(pLVar10,aLStack256);
    lib::L2CValue::operator_(this_00,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_130);
    lib::L2CValue::L2CValue(aLStack320,0x92a3b5b68);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    fVar15 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack336,fVar15);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    lib::L2CValue::operator_(pLVar10);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CAgent::math_atan((L2CAgent *)auStack400,pLVar10,(L2CValue *)puVar13);
    HVar6 = lib::L2CValue::as_hash(aLStack320);
    uVar17 = lib::L2CValue::as_number(pLVar8);
    lVar18 = lib::L2CValue::as_number(pLVar9);
    uVar5 = lib::L2CValue::as_number(aLStack336);
    local_130 = uVar17 & 0xffffffff | lVar18 << 0x20;
    uStack296 = (ulong)uVar5;
    uVar17 = lib::L2CValue::as_number(aLStack352);
    lVar18 = lib::L2CValue::as_number(aLStack368);
    uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack400 + 0x10));
    local_90 = uVar17 & 0xffffffff | lVar18 << 0x20;
    uStack136 = (ulong)uVar5;
    puVar14 = &local_130;
    uVar5 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar6,(Vector3f *)puVar14,(Vector3f *)&local_90,1.0,0,-1
                       ,false,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,uVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack336,0xe963002d8);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
    fVar15 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack352,fVar15);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack400 + 0x10),0.0);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    lib::L2CValue::operator_(pLVar10);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CAgent::math_atan((L2CAgent *)auStack416,pLVar10,(L2CValue *)puVar14);
    HVar6 = lib::L2CValue::as_hash(aLStack336);
    uVar17 = lib::L2CValue::as_number(pLVar8);
    lVar18 = lib::L2CValue::as_number(pLVar9);
    uVar5 = lib::L2CValue::as_number(aLStack352);
    local_130 = uVar17 & 0xffffffff | lVar18 << 0x20;
    uStack296 = (ulong)uVar5;
    uVar17 = lib::L2CValue::as_number(aLStack368);
    lVar18 = lib::L2CValue::as_number((L2CValue *)(auStack400 + 0x10));
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack400);
    local_90 = uVar17 & 0xffffffff | lVar18 << 0x20;
    uStack136 = (ulong)uVar5;
    uVar5 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar6,(Vector3f *)&local_130,(Vector3f *)&local_90,1.0,0
                       ,-1,false,0);
    lib::L2CValue::L2CValue(aLStack320,uVar5);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)auStack400);
    lib::L2CValue::_L2CValue((L2CValue *)auStack416);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack400 + 0x10));
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,SpecialNRebound_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  return;
}

