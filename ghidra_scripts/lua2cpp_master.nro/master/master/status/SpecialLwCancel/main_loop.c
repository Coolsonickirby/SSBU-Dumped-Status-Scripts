
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLwCancel_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  Hash40 HVar10;
  float fVar11;
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
LAB_7100024e40:
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    cVar2 = (char)&stack0xfffffffffffffff0;
    if ((bVar4 & 1U) == 0) {
      fVar11 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack176,0x17be683e09);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      uVar9 = lib::L2CValue::as_integer(aLStack176);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack144,fVar11);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator_(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar4 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar5,0);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
      lib::L2CValue::L2CValue(aLStack96,0x11a669b894);
      lib::L2CValue::L2CValue(aLStack112,0x15d0344c8b);
      lib::L2CValue::L2CValue(aLStack144,true);
      lib::L2CValue::L2CValue(aLStack160,aLStack96);
      lib::L2CValue::L2CValue(aLStack176,aLStack112);
      lib::L2CValue::L2CValue(aLStack192,aLStack144);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar4 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        bVar3 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack208);
        if ((bVar4 & 1U) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
            lib::L2CValue::L2CValue(aLStack208,0x15d0344c8b);
            lib::L2CValue::L2CValue(aLStack224,true);
            iVar5 = lib::L2CValue::as_integer(aLStack80);
            HVar10 = lib::L2CValue::as_hash(aLStack208);
            bVar3 = lib::L2CValue::as_bool(aLStack224);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar5,HVar10,(bool)(bVar3 & 1),-1.0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
            lib::L2CValue::L2CValue(aLStack208,0x11a669b894);
            lib::L2CValue::L2CValue(aLStack224,true);
            iVar5 = lib::L2CValue::as_integer(aLStack80);
            HVar10 = lib::L2CValue::as_hash(aLStack208);
            bVar3 = lib::L2CValue::as_bool(aLStack224);
            app::lua_bind::ArticleModule__change_motion_impl
                      (this->moduleAccessor,iVar5,HVar10,(bool)(bVar3 & 1),-1.0);
          }
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
          lib::L2CValue::L2CValue(aLStack208,0x237c45e32b);
          lib::L2CValue::L2CValue(aLStack224,0);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          HVar10 = lib::L2CValue::as_hash(aLStack208);
          uVar6 = lib::L2CValue::as_integer(aLStack224);
          app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar5,HVar10,uVar6);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
      lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
      lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting
                (this,(L2CValue)(cVar2 + -0x40));
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar2 + -0x40),(L2CValue)(cVar2 + -0x50));
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lVar1 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar7 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) goto LAB_7100025214;
      goto LAB_7100024e40;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar1 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_7100025214:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

