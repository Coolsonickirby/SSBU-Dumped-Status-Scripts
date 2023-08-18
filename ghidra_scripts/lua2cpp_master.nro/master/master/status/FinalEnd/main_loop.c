
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::FinalEnd_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  Fighter *pFVar9;
  BattleObjectModuleAccessor *pBVar10;
  ulong uVar11;
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
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) goto LAB_7100023b24;
    }
    iVar4 = 1;
    goto LAB_71000242ec;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_7100023b24:
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_STATUS_FINAL_FLAG_GROUND_CORRECT_SET);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      bVar3 = false;
LAB_7100023cdc:
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_INSTANCE_WORK_ID_FLAG_FINAL_STATUS);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar11 = lib::L2CValue::operator__(aLStack192,aLStack96);
      uVar11 = uVar11 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      if (bVar3) goto LAB_7100023d44;
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MASTER_STATUS_FINAL_FLAG_GROUND_CORRECT_ON);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar3 = true;
      uVar11 = 1;
      if ((uVar6 & 1) == 0) goto LAB_7100023cdc;
LAB_7100023d44:
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar11 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_STATUS_FINAL_FLAG_GROUND_CORRECT_SET);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_STATUS_FINAL_FLAG_GROUND_CORRECT_ON);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x92ee4d34c);
      lib::L2CValue::L2CValue(aLStack128,0xdf3b40b09);
      lib::L2CValue::L2CValue(aLStack192,true);
      lib::L2CValue::L2CValue(aLStack224,aLStack112);
      lib::L2CValue::L2CValue(aLStack240,aLStack128);
      lib::L2CValue::L2CValue(aLStack256,aLStack192);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::L2CValue(aLStack288,FIGHTER_KINETIC_TYPE_MOTION);
      lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
      lua2cpp::L2CFighterCommon::sub_change_kinetic_type_by_situation
                (this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      pLVar1 = &this->globalTable;
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
LAB_7100024068:
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
          lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
            lib::L2CValue::L2CValue(aLStack320,0x92ee4d34c);
            iVar4 = lib::L2CValue::as_integer(aLStack96);
            HVar8 = lib::L2CValue::as_hash(aLStack320);
            bVar2 = lib::L2CValue::as_bool(aLStack192);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar4,HVar8,(bool)(bVar2 & 1),-1.0);
            goto LAB_710002419c;
          }
        }
      }
      else {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) goto LAB_7100024068;
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
        lib::L2CValue::L2CValue(aLStack320,0xdf3b40b09);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        HVar8 = lib::L2CValue::as_hash(aLStack320);
        bVar2 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar4,HVar8,(bool)(bVar2 & 1),-1.0);
LAB_710002419c:
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_STATUS_FINAL_FLAG_GROUND_CORRECT_SET);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    pLVar1 = &this->globalTable;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,8);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,4);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_FINAL_MODULE_END_EXEC);
      pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::FighterSpecializer_Master::call_final_module(pFVar9,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,5);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    app::KineticUtility::clear_unable_energy(iVar4,pBVar10);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  iVar4 = 0;
LAB_71000242ec:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

