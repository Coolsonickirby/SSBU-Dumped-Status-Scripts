
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RefletSpecialNShoot_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  FighterModuleAccessor *pFVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
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
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    FUN_710019c000(aLStack80,this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710019e7a4;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_REFLET_STATUS_SPECIAL_S_FLAG_SHOOT_OK);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack144);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar6 = aLStack160;
LAB_710019e184:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar10);
    lib::L2CValue::L2CValue(aLStack80,9.0);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLET_STATUS_COMMON_FLAG_MAGIC_EMPTY_EFFECT_DONE)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack128);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
        lib::L2CValue::L2CValue(aLStack144,0x11874b1edc);
        lib::L2CValue::L2CValue(aLStack160,0x5eb263e0d);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,1.0);
        lib::L2CValue::L2CValue(aLStack288,true);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
        app::sv_module_access::effect(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_REFLET_STATUS_COMMON_FLAG_MAGIC_EMPTY_EFFECT_DONE);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        pLVar6 = aLStack80;
        goto LAB_710019e184;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLET_STATUS_SPECIAL_N_SHOOT_FLAG_TRY);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLET_STATUS_SPECIAL_N_SHOOT_FLAG_SHOOT_OK);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
      pFVar7 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::FighterSpecializer_Reflet::get_active_thunder_num(pFVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_TEMP_MAGIC_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::operator_(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
LAB_710019e3f8:
        iVar3 = FIGHTER_KIND_KIRBY;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        uVar5 = lib::L2CValue::operator__(aLStack80,pLVar6);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
          uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
            uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
              uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar5 & 1) == 0) goto LAB_710019e708;
              lib::L2CValue::L2CValue(aLStack160,0x15f1500bd2);
              HVar9 = lib::L2CValue::as_hash(aLStack160);
              iVar3 = app::lua_bind::SoundModule__play_se_impl
                                (this->moduleAccessor,HVar9,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack80,iVar3);
            }
            else {
              lib::L2CValue::L2CValue(aLStack160,0x1586573b44);
              HVar9 = lib::L2CValue::as_hash(aLStack160);
              iVar3 = app::lua_bind::SoundModule__play_se_impl
                                (this->moduleAccessor,HVar9,true,false,false,false,0);
              lib::L2CValue::L2CValue(aLStack80,iVar3);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack160,0x151f5e6afe);
            HVar9 = lib::L2CValue::as_hash(aLStack160);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (this->moduleAccessor,HVar9,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack80,iVar3);
          }
LAB_710019e6f8:
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack160);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
          uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack160,0x17b7a2315d);
            HVar9 = lib::L2CValue::as_hash(aLStack160);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (this->moduleAccessor,HVar9,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack80,iVar3);
            goto LAB_710019e6f8;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
          uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack160,0x172eab60e7);
            HVar9 = lib::L2CValue::as_hash(aLStack160);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (this->moduleAccessor,HVar9,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack80,iVar3);
            goto LAB_710019e6f8;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
          uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack160,0x1759ac5071);
            HVar9 = lib::L2CValue::as_hash(aLStack160);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (this->moduleAccessor,HVar9,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack80,iVar3);
            goto LAB_710019e6f8;
          }
        }
LAB_710019e708:
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_REFLET_GENERATE_ARTICLE_THUNDER);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
        lib::L2CValue::_L2CValue(aLStack160);
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_TEMP_MAGIC_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::L2CValue(aLStack192,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack208,0x240f2a2ff7);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        uVar8 = lib::L2CValue::as_integer(aLStack208);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar8);
        lib::L2CValue::L2CValue(aLStack176,iVar3);
        uVar5 = lib::L2CValue::operator_(aLStack80,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar5 & 1) != 0) goto LAB_710019e3f8;
      }
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLET_STATUS_SPECIAL_N_SHOOT_FLAG_TRY);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  lib::L2CValue::L2CValue(aLStack144,aLStack96);
  FUN_7100199fc0(this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_710019cb00(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710019e7a4:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

