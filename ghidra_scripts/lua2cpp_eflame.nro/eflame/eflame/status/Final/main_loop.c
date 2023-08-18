
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEflame::status::Final_main_loop(L2CFighterEflame *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  long lVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710000f5f0:
    bVar1 = app::FighterSpecializer_EFlame::final_module_hit_success();
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) {
LAB_710000f76c:
        lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack112,fVar9);
          lib::L2CValue::L2CValue(aLStack80,1.0);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0xb0b14922f);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x992785806);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
        }
        else {
          fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack112,fVar9);
          lib::L2CValue::L2CValue(aLStack80,1.0);
          uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x7c783ffd5);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x5ecd55cc6);
            lib::L2CValue::operator_(aLStack96,aLStack80);
          }
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          HVar7 = lib::L2CValue::as_hash(aLStack96);
          app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                    (this->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
        }
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_STATUS_FINAL_FLAG_GENERATE_DIVER);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_STATUS_FINAL_FLAG_GENERATE_DIVER);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_GENERATE_ARTICLE_DIVER);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_GENERATE_ARTICLE_DIVER);
          lib::L2CValue::L2CValue(aLStack112,0xd1a6b318f);
          lib::L2CValue::L2CValue
                    (aLStack144,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_START);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::ArticleModule__set_int64_impl(this->moduleAccessor,iVar3,lVar8,iVar4);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_GENERATE_ARTICLE_DIVER);
          lib::L2CValue::L2CValue(aLStack112,0x11173987eb);
          lib::L2CValue::L2CValue
                    (aLStack144,
                     _WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_AIR_START);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::ArticleModule__set_int64_impl(this->moduleAccessor,iVar3,lVar8,iVar4);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_GENERATE_ARTICLE_DIVER);
          lib::L2CValue::L2CValue(aLStack112,0xe47453f5f);
          lib::L2CValue::L2CValue
                    (aLStack144,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_ATTACK)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::ArticleModule__set_int64_impl(this->moduleAccessor,iVar3,lVar8,iVar4);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_GENERATE_ARTICLE_DIVER);
          lib::L2CValue::L2CValue(aLStack112,0x120d97c8a8);
          lib::L2CValue::L2CValue
                    (aLStack144,
                     _WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_AIR_ATTACK);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::ArticleModule__set_int64_impl(this->moduleAccessor,iVar3,lVar8,iVar4);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_GENERATE_ARTICLE_DIVER);
          lib::L2CValue::L2CValue(aLStack112,0xb5314f7b0);
          lib::L2CValue::L2CValue
                    (aLStack144,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_END);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::ArticleModule__set_int64_impl(this->moduleAccessor,iVar3,lVar8,iVar4);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EFLAME_GENERATE_ARTICLE_DIVER);
          lib::L2CValue::L2CValue(aLStack112,0xf3a48a016);
          lib::L2CValue::L2CValue
                    (aLStack144,_WEAPON_ELEMENT_DIVER_INSTANCE_WORK_ID_INT_MOTION_KIND_FINAL_AIR_END
                    );
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          lVar8 = lib::L2CValue::as_integer(aLStack112);
          iVar4 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::ArticleModule__set_int64_impl(this->moduleAccessor,iVar3,lVar8,iVar4);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack160,false);
        lib::L2CValue::_L2CValue(aLStack96);
        goto LAB_710000f71c;
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_710000f76c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ELEMENT_STATUS_KIND_FINAL_READY);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack80;
LAB_710000f70c:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar6 = aLStack96;
      goto LAB_710000f70c;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) goto LAB_710000f5f0;
  }
  lib::L2CValue::L2CValue(aLStack160,true);
LAB_710000f71c:
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

