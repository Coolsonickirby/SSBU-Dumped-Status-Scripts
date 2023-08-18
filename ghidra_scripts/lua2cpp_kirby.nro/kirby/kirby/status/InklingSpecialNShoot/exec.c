
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::InklingSpecialNShoot_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  Fighter *pFVar9;
  Hash40 HVar10;
  Hash40 HVar11;
  float fVar12;
  float fVar13;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x140707e4de);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack304,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::operator_(pLVar7,aLStack304);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_STATUS_SPECIAL_N_WORK_INT_BULLET_NUM);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_GENERATE_ARTICLE_INKBULLET);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    pvVar8 = (void *)app::sv_system::battle_object(this->luaStateAgent);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar8);
    }
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
    fVar12 = (float)app::FighterSpecializer_Inkling::get_sub_ink_special_n(pFVar9);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack336,aLStack320);
    iVar3 = FIGHTER_KIND_KIRBY;
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    uVar5 = lib::L2CValue::operator__(aLStack112,pLVar7);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_INK_SUCCESS);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
    uVar4 = lib::L2CValue::as_integer(pLVar7);
    iVar3 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar12);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack208,aLStack192);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    pvVar8 = (void *)app::sv_system::battle_object(this->luaStateAgent);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar8);
    }
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
    fVar12 = (float)app::FighterSpecializer_Inkling::get_ink_max(pFVar9);
    lib::L2CValue::L2CValue(aLStack224,fVar12);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack112,aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    iVar3 = FIGHTER_KIND_KIRBY;
    if ((uVar5 & 1) == 0) {
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      pvVar8 = (void *)app::sv_system::battle_object(this->luaStateAgent);
      if (pvVar8 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar8);
      }
      pFVar9 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
      app::FighterSpecializer_Inkling::lack_ink(pFVar9);
      pLVar7 = aLStack112;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      uVar5 = lib::L2CValue::operator__(aLStack112,pLVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_INK_SUCCESS);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::operator_(aLStack192,aLStack336);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,aLStack224);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::operator_(aLStack192,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar7 = aLStack240;
    }
    lib::L2CValue::_L2CValue(pLVar7);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x4ad12b739);
      lib::L2CValue::L2CValue(aLStack128,0xa48dd021e);
      HVar10 = lib::L2CValue::as_hash(aLStack112);
      HVar11 = lib::L2CValue::as_hash(aLStack128);
      app::lua_bind::VisibilityModule__set_status_default_impl(this->moduleAccessor,HVar10,HVar11);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_MOTION_PART_SET_KIND_TANK);
      lib::L2CValue::L2CValue(aLStack128,0xa48dd021e);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,true);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      HVar10 = lib::L2CValue::as_hash(aLStack128);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
                (this->moduleAccessor,iVar3,HVar10,fVar12,fVar13,(bool)(bVar1 & 1),false,0.0,true,
                 true,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack112,aLStack208);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar3 = FIGHTER_KIND_KIRBY;
      if ((uVar5 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        uVar5 = lib::L2CValue::operator__(aLStack112,pLVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack112,0x14b63f46d5);
          HVar10 = lib::L2CValue::as_hash(aLStack112);
          iVar3 = app::lua_bind::SoundModule__play_se_impl
                            (this->moduleAccessor,HVar10,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack288,iVar3);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack112);
        }
      }
    }
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    pvVar8 = (void *)app::sv_system::battle_object(this->luaStateAgent);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar8);
    }
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
    fVar12 = (float)lib::L2CValue::as_number(aLStack192);
    app::FighterSpecializer_Inkling::change_ink(pFVar9,fVar12);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
    uVar4 = lib::L2CValue::as_integer(pLVar7);
    iVar3 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,fVar12);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_INSTANCE_WORK_ID_INT_LAMP_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    pvVar8 = (void *)app::sv_system::battle_object(this->luaStateAgent);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar8);
    }
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
    fVar12 = (float)app::FighterSpecializer_Inkling::get_sub_ink_special_lw(pFVar9);
    lib::L2CValue::L2CValue(aLStack160,fVar12);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    pvVar8 = (void *)app::sv_system::battle_object(this->luaStateAgent);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar8);
    }
    pFVar9 = (Fighter *)lib::L2CValue::as_pointer(aLStack112);
    bVar1 = app::FighterSpecializer_Inkling::is_body_visible(pFVar9);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar5 = lib::L2CValue::operator_(aLStack144,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack128);
      if ((uVar5 & 1) == 0) {
LAB_71000d5ed8:
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::EffectModule__set_visible_impl(this->moduleAccessor,uVar4,(bool)(bVar1 & 1));
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,true);
        uVar5 = lib::L2CValue::operator__(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar5 & 1) == 0) goto LAB_71000d5ed8;
        lib::L2CValue::L2CValue(aLStack112,true);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::EffectModule__set_visible_impl(this->moduleAccessor,uVar4,(bool)(bVar1 & 1));
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_STATUS_SPECIAL_N_WORK_INT_BULLET_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0xe09acb02b);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack128);
  if ((uVar5 & 1) == 0) {
LAB_71000d6124:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
    uVar4 = lib::L2CValue::as_integer(pLVar7);
    iVar3 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar12);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack160);
        goto LAB_71000d6124;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_INKLING_SPECIAL_N_END);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack304);
  return;
}

