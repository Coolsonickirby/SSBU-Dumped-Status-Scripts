
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLwHit_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  GroundCorrectKind GVar6;
  int iVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  Fighter *pFVar11;
  Hash40 HVar12;
  float *pfVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  ulong *this_01;
  BattleObjectModuleAccessor **ppBVar16;
  float fVar17;
  long lVar18;
  ulong local_2f0;
  ulong uStack744;
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  undefined auStack624 [16];
  undefined auStack608 [16];
  undefined auStack592 [16];
  undefined auStack576 [32];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  undefined auStack496 [32];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
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
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_RESTARTED_MOTION_RATE);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  ppBVar16 = &this->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,false);
  uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar8 & 1) != 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x15eb39c9b7);
    uVar8 = lib::L2CValue::as_integer(aLStack112);
    uVar10 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar16,uVar8,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,iVar4);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_2f0,pLVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
      pFVar11 = (Fighter *)lib::L2CValue::as_pointer(pLVar9);
      app::FighterSpecializer_Master::restart_special_lw_hit_motion_rate(pFVar11);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_2f0,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_RESTARTED_MOTION_RATE
                );
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar16,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    }
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar16);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,true);
  uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + -0x80));
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,false);
    uVar8 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar9 = aLStack112;
LAB_7100025cb8:
      lib::L2CValue::_L2CValue(pLVar9);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,false);
      uVar8 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) goto LAB_71000257f8;
    }
    iVar4 = 0;
LAB_7100025d08:
    lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
    return;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71000257f8:
  bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  if ((bVar3 & 1U) != 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + '@'),(L2CValue)(cVar1 + '0'));
      lib::L2CValue::_L2CValue(aLStack224);
      lVar18 = -0xc0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + '`'),(L2CValue)(cVar1 + 'P'));
      lib::L2CValue::_L2CValue(aLStack192);
      lVar18 = -0xa0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar18));
    iVar4 = 1;
    goto LAB_7100025d08;
  }
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar16);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,false);
  uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) != 0) {
    this_00 = &this->globalTable;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    if ((uVar8 & 1) == 0) {
LAB_710002594c:
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      if ((uVar8 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
        if ((uVar8 & 1) != 0) goto LAB_71000259bc;
      }
    }
    else {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      if ((uVar8 & 1) == 0) goto LAB_710002594c;
LAB_71000259bc:
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_DONE_PULL_AXE);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar4);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,true);
      uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar8 & 1) != 0) {
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_SITUATION_KIND_GROUND);
        uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack240,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_CANCEL);
          lib::L2CValue::L2CValue(aLStack256,false);
          lua2cpp::L2CFighterBase::change_status
                    (this,(L2CValue)(cVar1 + ' '),(L2CValue)(cVar1 + '\x10'));
          lib::L2CValue::_L2CValue(aLStack256);
          pLVar9 = aLStack240;
          goto LAB_7100025cb8;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0xeb28cfd52);
        HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_2f0);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (*ppBVar16,HVar12,-1.0,1.0,0.0,false,false);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue(aLStack112,0x20dce16cdc);
        lib::L2CValue::L2CValue(aLStack128,0);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
        HVar12 = lib::L2CValue::as_hash(aLStack112);
        uVar5 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar16,iVar4,HVar12,uVar5);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,GROUND_CORRECT_KIND_GROUND);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
        app::lua_bind::GroundModule__correct_impl(*ppBVar16,GVar6);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack112,0xeb28cfd52);
  lib::L2CValue::L2CValue(aLStack128,0x12f0de089d);
  lib::L2CValue::L2CValue(aLStack160,true);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack288,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_DONE_PULL_AXE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,false);
  uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,aLStack112);
    lib::L2CValue::L2CValue(aLStack320,aLStack128);
    lib::L2CValue::L2CValue(aLStack336,aLStack160);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((bVar3 & 1U) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,GROUND_CORRECT_KIND_AIR);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
        app::lua_bind::GroundModule__correct_impl(*ppBVar16,GVar6);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
        app::lua_bind::GroundModule__correct_impl(*ppBVar16,GVar6);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack288,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_PULL_AXE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,true);
  uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack288,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_DONE_PULL_AXE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,true);
    uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    if ((uVar8 & 1) != 0) {
      FUN_7100027540(&local_2f0,this);
      lib::L2CValue::L2CValue(aLStack384,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack400,false);
      lib::L2CValue::L2CValue(aLStack416,(L2CValue *)&local_2f0);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting_gravity_func
                (this,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      goto LAB_710002609c;
    }
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),true);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack288,_WEAPON_MASTER_AXE_INSTANCE_WORK_ID_FLAG_PULLED);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
      bVar2 = lib::L2CValue::as_bool((L2CValue *)(auStack288 + 0x10));
      iVar7 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      app::lua_bind::ArticleModule__set_flag_impl(*ppBVar16,iVar4,(bool)(bVar2 & 1),iVar7);
      lib::L2CValue::_L2CValue((L2CValue *)auStack288);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      lib::L2CValue::L2CValue(aLStack352,0x1018dfb2f4);
      lua2cpp::L2CFighterCommon::sub_set_special_start_inherit_common_kinetic_setting
                (this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      FUN_7100027540(aLStack368,this);
      lib::L2CValue::_L2CValue(aLStack368);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),true);
    lib::L2CValue::L2CValue((L2CValue *)auStack288,_WEAPON_MASTER_AXE_INSTANCE_WORK_ID_FLAG_PULLED);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
    bVar2 = lib::L2CValue::as_bool((L2CValue *)(auStack288 + 0x10));
    iVar7 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    app::lua_bind::ArticleModule__set_flag_impl(*ppBVar16,iVar4,(bool)(bVar2 & 1),iVar7);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar16,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,FIGHTER_STATUS_KIND_CLIFF_CATCH._4_4_);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar16,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_FIGHTER_KINETIC_ENERGY_ID_JOSTLE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar16,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_PULL_AXE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_2f0,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_DONE_PULL_AXE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar16,iVar4);
LAB_710002609c:
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  }
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2f0,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLOAT_CURRENT_DEGREE_X);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
  fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar16,iVar4);
  lib::L2CValue::L2CValue(aLStack432,fVar17);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack464,0x17716938e9);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
  uVar10 = lib::L2CValue::as_integer(aLStack464);
  fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar8,uVar10);
  lib::L2CValue::L2CValue(aLStack448,fVar17);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0x1018dfb2f4);
  lib::L2CValue::L2CValue((L2CValue *)(auStack496 + 0x10),0x15f3cf5911);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)(auStack496 + 0x10));
  fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar8,uVar10);
  lib::L2CValue::L2CValue(aLStack464,fVar17);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack496 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,SITUATION_KIND_AIR);
  uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)(auStack496 + 0x10),0x1018dfb2f4);
    lib::L2CValue::L2CValue((L2CValue *)auStack496,0x1452ee0ae4);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack496 + 0x10));
    uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack496);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar8,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,fVar17);
    lib::L2CValue::operator_(aLStack448,(L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack496);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack496 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)(auStack496 + 0x10),0x1018dfb2f4);
    lib::L2CValue::L2CValue((L2CValue *)auStack496,0x127884a069);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack496 + 0x10));
    uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack496);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar8,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,fVar17);
    lib::L2CValue::operator_(aLStack464,(L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack496);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack496 + 0x10));
  }
  lib::L2CValue::L2CValue((L2CValue *)(auStack496 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0.0);
  uVar8 = lib::L2CValue::operator__(aLStack464,(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  if ((uVar8 & 1) != 0) goto LAB_7100026cd4;
  lib::L2CValue::L2CValue(aLStack512,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_REVERT_DEGREE_X);
  iVar4 = lib::L2CValue::as_integer(aLStack512);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack496,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,false);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack496,(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack496);
  lib::L2CValue::_L2CValue(aLStack512);
  if ((uVar8 & 1) != 0) {
    pfVar13 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar16);
    lib::L2CValue::L2CValue((L2CValue *)(auStack576 + 0x10),*pfVar13);
    lib::L2CValue::L2CValue(aLStack544,pfVar13[1]);
    lib::L2CValue::L2CValue(aLStack528,pfVar13[2]);
    FUN_7100005230(&local_2f0,this,auStack576 + 0x10);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack576 + 0x10));
    lib::L2CValue::L2CValue(aLStack512,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack576,_WEAPON_PIERCE_INSTANCE_WORK_ID_FLOAT_ATTACH_PREV_HIT_POS_X);
    iVar4 = lib::L2CValue::as_integer(aLStack512);
    iVar7 = lib::L2CValue::as_integer((L2CValue *)auStack576);
    fVar17 = (float)app::lua_bind::ArticleModule__get_float_impl(*ppBVar16,iVar4,iVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack496,fVar17);
    lib::L2CValue::_L2CValue((L2CValue *)auStack576);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::L2CValue((L2CValue *)auStack576,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack592,_WEAPON_PIERCE_INSTANCE_WORK_ID_FLOAT_ATTACH_PREV_HIT_POS_Y);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack576);
    pLVar14 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack592);
    fVar17 = (float)app::lua_bind::ArticleModule__get_float_impl(*ppBVar16,iVar4,(int)pLVar14);
    lib::L2CValue::L2CValue(aLStack512,fVar17);
    lib::L2CValue::_L2CValue((L2CValue *)auStack592);
    lib::L2CValue::_L2CValue((L2CValue *)auStack576);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_2f0,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack512,pLVar9);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_2f0,0x18cdc1683);
    lib::L2CValue::operator_((L2CValue *)auStack496,pLVar9);
    lib::L2CAgent::math_abs((L2CAgent *)auStack624,pLVar9);
    pLVar9 = (L2CValue *)auStack608;
    lib::L2CAgent::math_atan((L2CAgent *)auStack592,pLVar9,pLVar14);
    lib::L2CValue::_L2CValue((L2CValue *)auStack608);
    lib::L2CValue::_L2CValue((L2CValue *)auStack624);
    lib::L2CValue::_L2CValue((L2CValue *)auStack592);
    lib::L2CAgent::math_deg((L2CAgent *)auStack576,pLVar9);
    pLVar9 = (L2CValue *)auStack592;
    lib::L2CValue::operator_((L2CValue *)auStack288,pLVar9);
    lib::L2CValue::_L2CValue((L2CValue *)auStack592);
    lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar9);
    pLVar9 = (L2CValue *)auStack592;
    uVar8 = lib::L2CValue::operator_(aLStack464,pLVar9);
    lib::L2CValue::_L2CValue((L2CValue *)auStack592);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack640,(L2CValue *)auStack288);
      lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x80);
      lib::L2CValue::operator_((L2CValue *)auStack608,aLStack464);
      pLVar9 = (L2CValue *)auStack592;
      lib::L2CValue::operator_((L2CValue *)auStack288,pLVar9);
      lib::L2CValue::_L2CValue((L2CValue *)auStack592);
      lib::L2CValue::_L2CValue((L2CValue *)auStack608);
      lib::L2CValue::_L2CValue(aLStack640);
    }
    lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar9);
    lib::L2CValue::operator_(aLStack448,(L2CValue *)auStack592);
    lib::L2CValue::_L2CValue((L2CValue *)auStack592);
    lib::L2CValue::_L2CValue((L2CValue *)auStack576);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue((L2CValue *)auStack496);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  }
  pLVar9 = aLStack432;
  lib::L2CValue::operator_((L2CValue *)auStack288,pLVar9);
  lib::L2CAgent::math_abs((L2CAgent *)auStack496,pLVar9);
  uVar8 = lib::L2CValue::operator_((L2CValue *)&local_2f0,aLStack448);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack496);
  if ((uVar8 & 1) == 0) {
    uVar8 = lib::L2CValue::operator_((L2CValue *)auStack288,aLStack432);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::operator_(aLStack432,aLStack448);
      lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_2f0);
    }
    else {
      lib::L2CValue::operator_(aLStack432,aLStack448);
      lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_2f0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  }
  else {
    lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),(L2CValue *)auStack288);
  }
  bVar2 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl(FIGHTER_COMBO_TYPE_NONE);
  lib::L2CValue::L2CValue((L2CValue *)auStack496,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,false);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack496,(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack496);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack576,0.0);
    uVar8 = lib::L2CValue::as_number((L2CValue *)auStack496);
    lVar18 = lib::L2CValue::as_number(aLStack512);
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack576);
    local_2f0 = uVar8 & 0xffffffff | lVar18 << 0x20;
    uStack744 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar16,(Vector3f *)&local_2f0,0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack576);
    lib::L2CValue::_L2CValue(aLStack512);
    pLVar9 = (L2CValue *)auStack496;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack496,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_REVERT_DEGREE_X);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack496);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_2f0,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack496);
    if ((bVar3 & 1U) == 0) {
      pfVar13 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar16);
      lib::L2CValue::L2CValue(aLStack688,*pfVar13);
      lib::L2CValue::L2CValue(aLStack672,pfVar13[1]);
      lib::L2CValue::L2CValue(aLStack656,pfVar13[2]);
      FUN_7100005230(auStack496,this,aLStack688);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue(aLStack688);
      lib::L2CValue::L2CValue(aLStack704,0.0);
      lib::L2CValue::L2CValue(aLStack720,0.0);
      pLVar9 = aLStack720;
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x40,SUB81(pLVar9,0));
      lib::L2CValue::_L2CValue(aLStack720);
      lib::L2CValue::_L2CValue(aLStack704);
      pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack512,0x18cdc1683);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack512,0x1fbdb2615);
      pfVar13 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl(FIGHTER_COMBO_TYPE_NONE)
      ;
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,*pfVar13);
      lib::L2CValue::L2CValue(aLStack736,pfVar13[1]);
      lib::L2CValue::operator_(pLVar14,(L2CValue *)&local_2f0);
      lib::L2CValue::operator_(pLVar15,aLStack736);
      lib::L2CValue::_L2CValue(aLStack736);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack496,0x18cdc1683);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack512,0x18cdc1683);
      lib::L2CValue::operator_(pLVar14,pLVar15);
      pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack496,0x1fbdb2615);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack512,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar14,pLVar15);
      pLVar14 = (L2CValue *)auStack592;
      lib::L2CAgent::math_atan((L2CAgent *)auStack576,pLVar14,pLVar9);
      lib::L2CAgent::math_deg((L2CAgent *)auStack608,pLVar14);
      lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      fVar17 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar16);
      lib::L2CValue::L2CValue((L2CValue *)auStack624,fVar17);
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,-1.0);
      uVar8 = lib::L2CValue::operator__((L2CValue *)auStack624,(L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack624);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10));
        lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack608);
      lib::L2CValue::_L2CValue((L2CValue *)auStack592);
      lib::L2CValue::_L2CValue((L2CValue *)auStack576);
      lib::L2CValue::_L2CValue(aLStack512);
      this_01 = (ulong *)auStack496;
LAB_7100026b60:
      lib::L2CValue::_L2CValue((L2CValue *)this_01);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack496,
                 _FIGHTER_MASTER_STATUS_SPECIAL_LW_FLOAT_CURRENT_GRAVITY_DEGREE_X);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack496);
      fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar16,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,fVar17);
      lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack496);
      lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0.0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)&local_2f0,(L2CValue *)(auStack496 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),aLStack448);
        lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0.0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)&local_2f0,(L2CValue *)(auStack496 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0.0);
          lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
          goto LAB_7100026b5c;
        }
      }
      else {
        lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),aLStack448);
        lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0.0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0.0);
          lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
LAB_7100026b5c:
          this_01 = &local_2f0;
          goto LAB_7100026b60;
        }
      }
    }
    lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::operator_(aLStack512,(L2CValue *)(auStack496 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)auStack576,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack592,0.0);
    uVar8 = lib::L2CValue::as_number((L2CValue *)auStack496);
    lVar18 = lib::L2CValue::as_number((L2CValue *)auStack576);
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack592);
    local_2f0 = uVar8 & 0xffffffff | lVar18 << 0x20;
    uStack744 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar16,(Vector3f *)&local_2f0,0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack592);
    lib::L2CValue::_L2CValue((L2CValue *)auStack576);
    lib::L2CValue::_L2CValue((L2CValue *)auStack496);
    pLVar9 = aLStack512;
  }
  lib::L2CValue::_L2CValue(pLVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2f0,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLOAT_CURRENT_DEGREE_X);
  fVar17 = (float)lib::L2CValue::as_number((L2CValue *)auStack496);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar16,fVar17,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack496);
  lib::L2CValue::L2CValue((L2CValue *)&local_2f0,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack496 + 0x10),(L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_2f0,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLOAT_CURRENT_GRAVITY_DEGREE_X
            );
  fVar17 = (float)lib::L2CValue::as_number((L2CValue *)auStack496);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_2f0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar16,fVar17,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_2f0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack496);
LAB_7100026cd4:
  lib::L2CValue::_L2CValue((L2CValue *)(auStack496 + 0x10));
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

