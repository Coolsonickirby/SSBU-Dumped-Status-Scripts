
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKen::status::Final2_fix_cam(L2CFighterKen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  BattleObjectModuleAccessor *pBVar14;
  Hash40 HVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  undefined8 auStack368 [2];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  undefined auStack320 [32];
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
  undefined8 local_80;
  ulong uStack120;
  
  iVar4 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,FIGHTER_STATUS_KIND_FINAL);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar6 & 1) == 0) {
    iVar4 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_RYU_STATUS_KIND_FINAL_HIT);
    uVar6 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar6 & 1) == 0) goto LAB_7100008a0c;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_ATTACK_HIT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    fVar17 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar17);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.5);
    lib::L2CValue::operator_((L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::operator_((L2CValue *)&local_90,aLStack160);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_LAST_HIT_POS_X);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar17);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_LAST_HIT_POS_Y);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar17);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_LAST_HIT_POS_Z);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar17);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_ATTACK_END)
    ;
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_LAST_ATTACK_VECTOR);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_ATTACK_VEC_NONE);
    puVar16 = &local_80;
    uVar6 = lib::L2CValue::operator__((L2CValue *)auStack320,(L2CValue *)puVar16);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar6 & 1) == 0) {
      lib::L2CAgent::math_rad((L2CAgent *)auStack320,(L2CValue *)puVar16);
    }
    else {
      lib::L2CValue::L2CValue(aLStack336,0.0);
    }
    lib::L2CValue::operator_(aLStack336,aLStack160);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    this_00 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
    lib::L2CValue::L2CValue(aLStack352,false);
    pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    uVar18 = lib::L2CValue::as_number(pLVar8);
    uVar19 = lib::L2CValue::as_number(pLVar9);
    uVar20 = lib::L2CValue::as_number(pLVar10);
    local_80 = CONCAT44(uVar19,uVar18);
    uStack120 = (ulong)uVar20;
    uVar18 = lib::L2CValue::as_number(pLVar11);
    uVar19 = lib::L2CValue::as_number(pLVar12);
    uVar20 = lib::L2CValue::as_number(pLVar13);
    local_90 = CONCAT44(uVar19,uVar18);
    uStack136 = (ulong)uVar20;
    bVar1 = lib::L2CValue::as_bool((L2CValue *)(auStack320 + 0x10));
    bVar3 = lib::L2CValue::as_bool(aLStack352);
    app::FighterSpecializer_Ryu::req_shinsyoryu_hit_effect
              (pBVar14,(Vector3f *)&local_80,(Vector3f *)&local_90,(bool)(bVar1 & 1),
               (bool)(bVar3 & 1));
    lib::L2CValue::_L2CValue(aLStack352);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack320 + 0x10));
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_TARGET_BATTLE_OBJECT_ID
                );
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack352,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0x50000000);
      uVar6 = lib::L2CValue::operator__(aLStack352,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar6 & 1) == 0) {
        app::FighterRyuLinkEventFinalDeadDamage::new_l2c_table();
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_RYU_LINK_NO_FINAL);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        uVar20 = lib::L2CValue::as_integer(aLStack352);
        bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar4,uVar20);
        lib::L2CValue::L2CValue(aLStack384,(bool)(bVar1 & 1));
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_RYU_LINK_NO_FINAL);
        FUN_7100009ad0(&local_80,this,&local_90,auStack368);
        lib::L2CValue::operator_((L2CValue *)auStack368,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_RYU_LINK_NO_FINAL);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0xf12bf8f81);
        bVar2 = lib::L2CValue::operator_cast_to_bool(pLVar7);
        if ((bVar2 & 1U) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
          pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
          pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
          pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
          pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
          lib::L2CValue::L2CValue(aLStack400,true);
          lib::L2CValue::L2CValue(aLStack416,true);
          pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
          uVar18 = lib::L2CValue::as_number(pLVar8);
          uVar19 = lib::L2CValue::as_number(pLVar9);
          uVar20 = lib::L2CValue::as_number(pLVar10);
          local_80 = CONCAT44(uVar19,uVar18);
          uStack120 = (ulong)uVar20;
          uVar18 = lib::L2CValue::as_number(pLVar11);
          uVar19 = lib::L2CValue::as_number(pLVar12);
          uVar20 = lib::L2CValue::as_number(pLVar13);
          local_90 = CONCAT44(uVar19,uVar18);
          uStack136 = (ulong)uVar20;
          bVar1 = lib::L2CValue::as_bool(aLStack400);
          bVar3 = lib::L2CValue::as_bool(aLStack416);
          app::FighterSpecializer_Ryu::req_shinsyoryu_hit_effect
                    (pBVar14,(Vector3f *)&local_80,(Vector3f *)&local_90,(bool)(bVar1 & 1),
                     (bool)(bVar3 & 1));
          lib::L2CValue::_L2CValue(aLStack416);
          lib::L2CValue::_L2CValue(aLStack400);
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
          pBVar14 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_80);
          bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_90);
          app::FighterSpecializer_Ryu::set_final_stage_disp_status
                    (pBVar14,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_AKEBONO_FINISH);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        }
        lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack368,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_AKEBONO_FINISH);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::operator_((L2CValue *)&local_90);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x115368aded);
        HVar15 = lib::L2CValue::as_hash((L2CValue *)&local_90);
        iVar4 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar15,true,false,false,false,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)auStack368,0x11b48ee821);
        HVar15 = lib::L2CValue::as_hash((L2CValue *)auStack368);
        iVar4 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar15,true,false,false,false,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        puVar16 = auStack368;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0xe79da5e4c);
        HVar15 = lib::L2CValue::as_hash((L2CValue *)&local_90);
        iVar4 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar15,true,false,false,false,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        puVar16 = &local_90;
      }
      lib::L2CValue::_L2CValue((L2CValue *)puVar16);
      lib::L2CValue::L2CValue((L2CValue *)auStack368,0x50000000);
      lib::L2CValue::L2CValue
                (aLStack400,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_INT_TARGET_BATTLE_OBJECT_ID);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
      iVar5 = lib::L2CValue::as_integer(aLStack400);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      lib::L2CValue::_L2CValue(aLStack352);
    }
    lib::L2CValue::L2CValue(aLStack352,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_ATTACK_HIT);
    iVar4 = lib::L2CValue::as_integer(aLStack352);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
  }
LAB_7100008a0c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

