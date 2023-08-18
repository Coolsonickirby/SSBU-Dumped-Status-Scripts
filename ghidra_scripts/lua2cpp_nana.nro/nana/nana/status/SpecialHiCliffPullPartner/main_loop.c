
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNana::status::SpecialHiCliffPullPartner_main_loop
          (L2CFighterNana *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  float fVar10;
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
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack192,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x10);
    lib::L2CValue::L2CValue(aLStack192,false);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar7 = aLStack80;
LAB_7100018950:
      lib::L2CValue::_L2CValue(pLVar7);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack192,false);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) goto LAB_7100018310;
    }
    iVar5 = 0;
    goto LAB_710001895c;
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100018310:
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar7,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar6 & 1) == 0) {
    bVar3 = app::lua_bind::GroundModule__is_status_cliff_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    lib::L2CValue::operator_(aLStack80);
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar4 & 1U) != 0) goto LAB_7100018394;
    bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar4 & 1U) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,8);
      lib::L2CValue::L2CValue(aLStack192,false);
      uVar6 = lib::L2CValue::operator__(pLVar7,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar6 & 1) == 0) {
LAB_71000184bc:
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_POPO_STATUS_SPECIAL_HI_CLIFF_PULL_PARTNER_FLAG_PULL);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue(aLStack192,true);
        uVar6 = lib::L2CValue::operator__(aLStack80,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack192,_FIGHTER_POPO_STATUS_SPECIAL_HI_CLIFF_PULL_PARTNER_FLAG_PULL);
          iVar5 = lib::L2CValue::as_integer(aLStack192);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::L2CValue(aLStack96,0x253ce36631);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          if ((bVar4 & 1U) == 0) {
LAB_71000188e8:
            lib::L2CValue::_L2CValue(aLStack80);
            lVar2 = -0x50;
          }
          else {
            lib::L2CValue::L2CValue(aLStack128,0x278468a5eb);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::L2CValue(aLStack192,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_JUMP_PRE);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack192);
            lib::L2CValue::_L2CValue(aLStack192);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue(aLStack128);
              goto LAB_71000188e8;
            }
            lib::L2CValue::L2CValue(aLStack160,_FIGHTER_POPO_LINK_NO_PARTNER);
            iVar5 = lib::L2CValue::as_integer(aLStack160);
            bVar3 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar5);
            lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
            lib::L2CValue::L2CValue(aLStack192,true);
            uVar6 = lib::L2CValue::operator__(aLStack144,aLStack192);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar6 & 1) == 0) goto LAB_71000188f8;
            pfVar8 = (float *)app::lua_bind::GroundModule__hang_cliff_pos_impl(this->moduleAccessor)
            ;
            lib::L2CValue::L2CValue(aLStack192,*pfVar8);
            lib::L2CValue::L2CValue(aLStack176,pfVar8[1]);
            lib::L2CValue::L2CValue(aLStack80,aLStack192);
            lib::L2CValue::L2CValue(aLStack96,aLStack176);
            lua2cpp::L2CFighterBase::Vector2__create
                      (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::L2CValue(aLStack96,0x254341e6cf);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_POPO_LINK_NO_PARTNER);
            lib::L2CValue::L2CValue(aLStack144,0x227080a11b);
            lib::L2CValue::L2CValue(aLStack160,_FIGHTER_POPO_STATUS_KIND_SPECIAL_HI_CLIFF_COMP);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue(aLStack128,0x254341e6cf);
            lib::L2CValue::L2CValue(aLStack144,_FIGHTER_POPO_LINK_NO_PARTNER);
            lib::L2CValue::L2CValue(aLStack160,0x226543d7b0);
            pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
            pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
            fVar10 = (float)app::lua_bind::GroundModule__get_z_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack208,fVar10);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar9);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lVar2 = -0x60;
          }
          lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
        }
LAB_71000188f8:
        lib::L2CValue::L2CValue(aLStack224,0);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar6 = lib::L2CValue::operator__(aLStack224,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((uVar6 & 1) == 0) goto LAB_7100018940;
        iVar5 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar6 = lib::L2CValue::operator__(aLStack80,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) goto LAB_71000184bc;
LAB_7100018940:
        iVar5 = 1;
      }
      lib::L2CValue::L2CValue(aLStack192,iVar5);
      pLVar7 = aLStack192;
      goto LAB_7100018950;
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_KIND_CLIFF_WAIT);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)(cVar1 + -0x40));
  }
  else {
LAB_7100018394:
    lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)(cVar1 + -0x40));
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  iVar5 = 1;
LAB_710001895c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

