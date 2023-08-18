
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SheikSpecialNShoot_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_71001fb370:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_STRANS_GROUND);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_STRANS_TEMP_0);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        if ((bVar2 & 1U) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) goto LAB_71001fb69c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_71001fb730;
        }
LAB_71001fb694:
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        if ((bVar2 & 1U) == 0) goto LAB_71001fb694;
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_71001fb730;
        }
      }
LAB_71001fb69c:
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
LAB_71001fb74c:
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::L2CValue(aLStack112,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_EFFECT);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_FT_SHEIK_STATUS_SPECIAL_N_FLAG_EFFECT);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack112,iVar3);
            lib::L2CValue::L2CValue(aLStack80,0);
            uVar4 = lib::L2CValue::operator_(aLStack80,aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHEIK_GENERATE_ARTICLE_NEEDLE);
              lib::L2CValue::operator_(aLStack96,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::ArticleModule__generate_article_impl
                        (this->moduleAccessor,iVar3,false,-1);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHEIK_INSTANCE_WORK_ID_INT_NEEDLE_COUNT);
              iVar3 = lib::L2CValue::as_integer(aLStack80);
              app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::_L2CValue(aLStack80);
            }
          }
          lib::L2CValue::_L2CValue(aLStack96);
        }
        iVar3 = 0;
        goto LAB_71001fb8f0;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
      }
      else {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_71001fb730;
        }
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHEIK_INSTANCE_WORK_ID_FLAG_STRANS_TEMP_0);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) {
        if ((uVar4 & 1) == 0) goto LAB_71001fb74c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        if ((uVar4 & 1) == 0) goto LAB_71001fb74c;
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
    }
LAB_71001fb730:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack80;
LAB_71001fb73c:
    lib::L2CValue::_L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar5 = aLStack96;
      goto LAB_71001fb73c;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_71001fb370;
  }
  iVar3 = 1;
LAB_71001fb8f0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

