
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiAirReach_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  Article *pAVar9;
  BattleObjectModuleAccessor *pBVar10;
  Hash40 HVar11;
  L2CValue *pLVar12;
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
  L2CValue aLStack80 [16];
  
  bVar3 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710003ba28:
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      return;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) goto LAB_710003ba28;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  pvVar8 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar5);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack160,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,pvVar8);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  uVar7 = lib::L2CValue::operator__
                    (aLStack160,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar7 & 1) == 0) {
    pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack160);
    uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
    lib::L2CValue::L2CValue(aLStack80,uVar6);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar6);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar8);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_TANTAN_SPIRALLEFT_MOTION_PART_SET_KIND_FLARE);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    HVar11 = app::lua_bind::MotionModule__motion_kind_partial_impl(pBVar10,iVar5);
    lib::L2CValue::L2CValue(aLStack112,HVar11);
    lib::L2CValue::L2CValue(aLStack80,0x5c86412ff);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_TANTAN_SPIRALLEFT_GENERATE_ARTICLE_PUNCH1);
      iVar5 = lib::L2CValue::as_integer(aLStack80);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      pvVar8 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar10,iVar5);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar8);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      uVar7 = lib::L2CValue::operator__
                        (aLStack112,
                         (L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      if ((uVar7 & 1) == 0) {
        pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack112);
        uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
        lib::L2CValue::L2CValue(aLStack80,uVar6);
        uVar6 = lib::L2CValue::as_integer(aLStack80);
        pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar6);
        if (pvVar8 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
          ;
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,pvVar8);
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack192,0);
        lib::L2CValue::L2CValue(aLStack208,false);
        iVar5 = lib::L2CValue::as_integer(aLStack192);
        bVar3 = lib::L2CValue::as_bool(aLStack208);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
        bVar3 = app::lua_bind::AttackModule__is_attack_impl(pBVar10,iVar5,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack176,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar7 = lib::L2CValue::operator__(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
          lib::L2CValue::L2CValue(aLStack192,false);
          FUN_710003b450(this,aLStack176,aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
        }
        lib::L2CValue::_L2CValue(aLStack128);
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_SPECIAL_HI_AIR_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50))
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710003c308;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  pvVar8 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar5);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar8);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  uVar7 = lib::L2CValue::operator__
                    (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar7 & 1) == 0) {
    pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack96);
    uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
    lib::L2CValue::L2CValue(aLStack80,uVar6);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar6);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar8);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
    iVar5 = app::lua_bind::PhysicsModule__get_2nd_status_impl(pBVar10);
    lib::L2CValue::L2CValue(aLStack128,iVar5);
    lib::L2CValue::L2CValue(aLStack80,_PH2NDARY_CRAW_COLLIDE);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack208,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack208,true);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    pvVar8 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar5);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar8);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    uVar7 = lib::L2CValue::operator__
                      (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X
                      );
    if ((uVar7 & 1) == 0) {
      pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack96);
      uVar6 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
      lib::L2CValue::L2CValue(aLStack80,uVar6);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar6);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar8);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack208,
                 _WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_HI_AIR_PHYSICS);
      iVar5 = lib::L2CValue::as_integer(aLStack208);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(pBVar10,iVar5);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack208);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x12eeb17698);
        lib::L2CValue::L2CValue(aLStack208,false);
        FUN_7100039610(aLStack80,this,aLStack128,aLStack208);
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack224,false);
          FUN_7100027640(this,aLStack224);
          lib::L2CValue::_L2CValue(aLStack224);
          FUN_71000278f0(this);
        }
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_REWIND);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar4 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_SPECIAL_HI_FLAG_REWIND);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_SPECIAL_HI_AIR_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50))
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710003c308;
  }
  bVar3 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
LAB_710003c20c:
    lVar2 = -0x50;
LAB_710003c2f0:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    this_00 = &this->globalTable;
    pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar12,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar12,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_710003c1d4;
      lib::L2CValue::_L2CValue(aLStack96);
LAB_710003c254:
      lib::L2CValue::L2CValue(aLStack80,0x105739d665);
      lib::L2CValue::L2CValue(aLStack96,0xed8a31e01);
      lib::L2CValue::L2CValue(aLStack112,false);
      lib::L2CValue::L2CValue(aLStack240,false);
      lib::L2CValue::L2CValue(aLStack256,aLStack80);
      lib::L2CValue::L2CValue(aLStack272,aLStack96);
      FUN_7100039930(this,aLStack112,aLStack240,aLStack256,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lVar2 = -0x40;
      goto LAB_710003c2f0;
    }
LAB_710003c1d4:
    pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar12,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) goto LAB_710003c20c;
    pLVar12 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar12,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) goto LAB_710003c254;
  }
  FUN_710003a8b0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710003c308:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

