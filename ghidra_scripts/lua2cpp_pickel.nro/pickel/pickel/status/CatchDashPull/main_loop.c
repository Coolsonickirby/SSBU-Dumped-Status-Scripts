
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::CatchDashPull_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  void *pvVar10;
  Article *pAVar11;
  float fVar12;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      bVar1 = app::FighterSpecializer_Pickel::ray_check_between_catch_fighter(pBVar8);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CATCH_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_CUT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      goto LAB_7100087f40;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_CATCH_PULL_FLAG_INIT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_CATCH_PULL_WORK_FLOAT_LINE_LENGTH);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar12);
      lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack176,0x15f4d61b74);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      uVar9 = lib::L2CValue::as_integer(aLStack176);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar12);
      uVar7 = lib::L2CValue::operator_(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
        bVar1 = app::FighterSpecializer_Pickel::ray_check_between_catch_fighter(pBVar8);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          app::lua_bind::CatchModule__catch_cut_impl(this->moduleAccessor,false,false);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_CUT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_7100087f40;
        }
        bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lua2cpp::L2CFighterCommon::CatchCont(this);
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar7 & 1) != 0) goto LAB_7100087f50;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_CATCH_PULL_FLAG_INIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      FUN_7100008d80(this);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_GENERATE_ARTICLE_FENCE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      pLVar6 = aLStack80;
LAB_7100088334:
      lib::L2CValue::_L2CValue(pLVar6);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_GENERATE_ARTICLE_FISHINGROD);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_7100087f50;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_GENERATE_ARTICLE_FISHINGROD);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      pvVar10 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar3);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,pvVar10);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      uVar7 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar7 & 1) == 0) {
        pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack96);
        uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
        lib::L2CValue::L2CValue(aLStack80,uVar4);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        pvVar10 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar10 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack112,pvVar10);
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_STATUS_CATCH_PULL_WORK_FLOAT_LINE_LENGTH)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack160,fVar12);
        lib::L2CValue::L2CValue
                  (aLStack208,_FIGHTER_PICKEL_STATUS_CATCH_PULL_WORK_FLOAT_LINE_LENGTH_START);
        iVar3 = lib::L2CValue::as_integer(aLStack208);
        fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack192,fVar12);
        lib::L2CValue::operator_(aLStack160,aLStack192);
        lib::L2CValue::L2CValue(aLStack80,1.0);
        lib::L2CValue::operator_(aLStack80,aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_GENERATE_ARTICLE_FENCE);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_PICKEL_FENCE_INSTANCE_WORK_ID_FLOAT_COMPLETE_RATIO);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        fVar12 = (float)lib::L2CValue::as_number(aLStack128);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::ArticleModule__set_float_impl(this->moduleAccessor,iVar3,fVar12,iVar5);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar6 = aLStack112;
        goto LAB_7100088334;
      }
    }
    pLVar6 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_JUMP);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100087f40:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_7100087f50:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

