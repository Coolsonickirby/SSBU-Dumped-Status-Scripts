
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanFirehydrant::status::Wait_main_loop
          (L2CWeaponPacmanFirehydrant *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  GroundCorrectKind GVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  float fVar10;
  undefined8 uVar11;
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
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack288,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack288,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar7 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack288,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack288,0x2ebbc52b1d);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack288);
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack288,2);
    lib::L2CValue::operator_(pLVar6,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack288,0);
    uVar7 = lib::L2CValue::operator__(aLStack80,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack288,true);
      uVar7 = lib::L2CValue::operator__(aLStack80,aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack304,GROUND_TOUCH_FLAG_DOWN);
        uVar3 = lib::L2CValue::as_integer(aLStack304);
        uVar11 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar3);
        lib::L2CValue::L2CValue(aLStack288,(float)uVar11);
        lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar11 >> 0x20));
        lib::L2CValue::L2CValue(aLStack80,aLStack288);
        lib::L2CValue::L2CValue(aLStack96,aLStack272);
        pLVar9 = aLStack96;
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,SUB81(pLVar9,0));
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack304);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
        lib::L2CValue::operator_((L2CValue *)auStack144,pLVar6);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
        lib::L2CValue::operator_(aLStack176,pLVar6);
        lib::L2CAgent::math_atan((L2CAgent *)auStack144,aLStack176,pLVar9);
        pLVar6 = aLStack80;
        lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),pLVar6);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CAgent::math_abs((L2CAgent *)(auStack144 + 0x10),pLVar6);
        lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar6);
        lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x118d74daa0);
        lib::L2CValue::L2CValue(aLStack304,0xafe3b250e);
        uVar7 = lib::L2CValue::as_integer(aLStack96);
        uVar8 = lib::L2CValue::as_integer(aLStack304);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack80,fVar10);
        lib::L2CValue::operator_(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack96);
        uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)(auStack144 + 0x10));
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_DOWN);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          lib::L2CValue::_L2CValue(aLStack256);
          goto LAB_7100044824;
        }
        lib::L2CValue::_L2CValue(aLStack256);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_WAIT_SHOOT);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::operator_(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_SHOOT_NUM);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x118d74daa0);
      lib::L2CValue::L2CValue(aLStack256,0xd0be058ac);
      uVar7 = lib::L2CValue::as_integer(aLStack96);
      uVar8 = lib::L2CValue::as_integer(aLStack256);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack80,iVar4);
      uVar7 = lib::L2CValue::operator_(aLStack208,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_SHOOT_NUM)
        ;
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACMAN_FIREHYDRANT_GENERATE_ARTICLE_WATER);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar4,false,-1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack256,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_WATER_UP);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,false);
        uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack256);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack80,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_WATER_REVERSE);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_PACMAN_FIREHYDRANT_GENERATE_ARTICLE_WATER);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar4,false,-1);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    (aLStack80,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_WATER_REVERSE);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack96,0x118d74daa0);
        lib::L2CValue::L2CValue(aLStack256,0xbd243b832);
        uVar7 = lib::L2CValue::as_integer(aLStack96);
        uVar8 = lib::L2CValue::as_integer(aLStack256);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack80,iVar4);
        lib::L2CValue::operator_(aLStack224,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack80,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_WAIT_SHOOT);
        iVar4 = lib::L2CValue::as_integer(aLStack224);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack96,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_PRE_SHOT_EFFECT_ID_0);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack80,iVar4);
        lib::L2CValue::operator_(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar7 = lib::L2CValue::operator__(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_MA_MSC_EFFECT_REMOVE);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_module_access::effect(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue
                  (aLStack256,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_PRE_SHOT_EFFECT_ID_1);
        iVar4 = lib::L2CValue::as_integer(aLStack256);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack80,iVar4);
        lib::L2CValue::operator_(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar7 = lib::L2CValue::operator__(aLStack192,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack256,_MA_MSC_EFFECT_REMOVE);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_module_access::effect(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack256);
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack288,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack288);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack288,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_7100044824:
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

