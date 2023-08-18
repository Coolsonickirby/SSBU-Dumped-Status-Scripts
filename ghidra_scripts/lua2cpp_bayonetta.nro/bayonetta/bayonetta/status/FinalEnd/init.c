
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalEnd_init(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  Hash40 HVar9;
  ulong uVar10;
  float *pfVar11;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  L2CValue aLStack384 [16];
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
  undefined8 local_90;
  ulong uStack136;
  undefined8 local_80;
  ulong uStack120;
  
  iVar4 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,iVar4);
  lib::L2CValue::L2CValue(aLStack240,FIGHTER_STATUS_KIND_FINAL);
  uVar6 = lib::L2CValue::operator__(aLStack272,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_START);
    uVar6 = lib::L2CValue::operator__(aLStack272,aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_SCENE01);
      uVar6 = lib::L2CValue::operator__(aLStack272,aLStack240);
      lib::L2CValue::_L2CValue(aLStack240);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_END);
        uVar6 = lib::L2CValue::operator__(aLStack272,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        if ((uVar6 & 1) == 0) goto LAB_710000bac0;
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        app::lua_bind::FighterBayonettaFinalModule__final_end_init_impl
                  (BATTLE_OBJECT_CATEGORY_ITEM,pBVar8);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
        lib::L2CValue::L2CValue
                  (aLStack240,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_INT_SELF_BATTLE_OBJECT_ID);
        iVar4 = lib::L2CValue::as_integer(pLVar7);
        iVar5 = lib::L2CValue::as_integer(aLStack240);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::L2CValue
                  (aLStack240,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_ENABLE_FINAL_END_CAMERA);
        iVar4 = lib::L2CValue::as_integer(aLStack240);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack240);
        iVar4 = app::sv_information::stage_id();
        lib::L2CValue::L2CValue(aLStack288,iVar4);
        lib::L2CValue::L2CValue(aLStack320,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack336,0x13c4f2eaa7);
        uVar6 = lib::L2CValue::as_integer(aLStack320);
        uVar10 = lib::L2CValue::as_integer(aLStack336);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar6,uVar10);
        lib::L2CValue::L2CValue(aLStack304,fVar12);
        lib::L2CValue::L2CValue(aLStack368,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack384,0x13b3f5da31);
        uVar6 = lib::L2CValue::as_integer(aLStack368);
        uVar10 = lib::L2CValue::as_integer(aLStack384);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar6,uVar10);
        lib::L2CValue::L2CValue(aLStack352,fVar12);
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack160,fVar12);
        fVar12 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack176,fVar12);
        pfVar11 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack240,*pfVar11);
        lib::L2CValue::L2CValue(aLStack224,pfVar11[1]);
        lib::L2CValue::L2CValue(aLStack208,pfVar11[2]);
        FUN_71000070f0(aLStack192,this,aLStack240);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
        lib::L2CValue::operator_(aLStack304,aLStack160);
        lib::L2CValue::operator_(aLStack256,aLStack176);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_90);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack256);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
        lib::L2CValue::operator_(aLStack352,aLStack176);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_90);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,_CAMERA_UPDATE_POS_XYZ);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::CameraModule__set_enable_update_pos_impl(this->moduleAccessor,uVar3,-1);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue(aLStack256,0);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
        this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
        this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
        this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
        this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
        this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        uVar13 = lib::L2CValue::as_number(pLVar7);
        uVar14 = lib::L2CValue::as_number(this_00);
        uVar15 = lib::L2CValue::as_number(this_01);
        local_80 = CONCAT44(uVar14,uVar13);
        uStack120 = (ulong)uVar15;
        uVar13 = lib::L2CValue::as_number(this_02);
        uVar14 = lib::L2CValue::as_number(this_03);
        uVar15 = lib::L2CValue::as_number(this_04);
        local_90 = CONCAT44(uVar14,uVar13);
        uStack136 = (ulong)uVar15;
        app::lua_bind::CameraModule__update_force_impl
                  (this->moduleAccessor,iVar4,(Vector3f *)&local_80,(Vector3f *)&local_90);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::CameraModule__set_enable_update_pos_impl(this->moduleAccessor,uVar3,-1);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::L2CValue
                  (aLStack240,_FIGHTER_BAYONETTA_STATUS_WORK_ID_FINAL_FLAG_ENABLE_FINAL_END_CAMERA);
        iVar4 = lib::L2CValue::as_integer(aLStack240);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack240);
        pLVar7 = aLStack288;
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
        app::lua_bind::FighterBayonettaFinalModule__final_scene01_init_impl
                  (BATTLE_OBJECT_CATEGORY_ITEM,pBVar8);
        lib::L2CValue::L2CValue(aLStack240,false);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1086bdf904);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
        bVar1 = lib::L2CValue::as_bool(aLStack240);
        HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_80);
        bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_90);
        app::lua_bind::PhysicsModule__set_swing_joint_name_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),HVar9,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::L2CValue(aLStack240,false);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x104a17f99a);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
        bVar1 = lib::L2CValue::as_bool(aLStack240);
        HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_80);
        bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_90);
        app::lua_bind::PhysicsModule__set_swing_joint_name_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),HVar9,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::L2CValue(aLStack240,false);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x10c498fe79);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
        bVar1 = lib::L2CValue::as_bool(aLStack240);
        HVar9 = lib::L2CValue::as_hash((L2CValue *)&local_80);
        bVar2 = lib::L2CValue::as_bool((L2CValue *)&local_90);
        app::lua_bind::PhysicsModule__set_swing_joint_name_impl
                  (this->moduleAccessor,(bool)(bVar1 & 1),HVar9,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar7 = aLStack240;
      }
      lib::L2CValue::_L2CValue(pLVar7);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
      app::lua_bind::FighterBayonettaFinalModule__final_start_init_impl
                (BATTLE_OBJECT_CATEGORY_ITEM,pBVar8);
    }
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    app::lua_bind::FighterBayonettaFinalModule__final_init_impl(BATTLE_OBJECT_CATEGORY_ITEM,pBVar8);
  }
LAB_710000bac0:
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

