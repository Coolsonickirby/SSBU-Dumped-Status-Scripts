
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::Batwithin_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  HitStatus HVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_BATWITHIN_INT_STATUS_KIND);
  iVar3 = lib::L2CValue::as_integer(pLVar6);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack144,pLVar6);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE);
  uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_ESCAPE_F);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x12b7302e20);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack176,0x126b0886d8);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      uVar8 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      goto LAB_710001f41c;
    }
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_B);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1207e95da2);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack176,0x129f47a2cb);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      uVar8 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      goto LAB_710001f41c;
    }
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_AIR);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) goto LAB_710001f434;
    lib::L2CValue::L2CValue(aLStack96,0x143618a558);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack176,0x14535b3acb);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    uVar8 = lib::L2CValue::as_integer(aLStack176);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar6 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x109ed780eb);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack176,0x10298325fe);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    uVar8 = lib::L2CValue::as_integer(aLStack176);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator_(aLStack112,aLStack96);
LAB_710001f41c:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar6 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710001f434:
  lib::L2CValue::L2CValue(aLStack176,aLStack144);
  FUN_7100020f20(aLStack160,this);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lib::L2CValue::L2CValue(aLStack208,aLStack160);
  FUN_71000216b0(this,aLStack192,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_BATWITHIN_INT_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_XLU);
  HVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar5,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),0xff);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_FORCE_LOUPE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x15d05a2e3b);
  lib::L2CValue::L2CValue(aLStack224,true);
  lib::L2CValue::L2CValue(aLStack240,true);
  HVar9 = lib::L2CValue::as_hash(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  bVar2 = lib::L2CValue::as_bool(aLStack240);
  app::lua_bind::EffectModule__kill_kind_impl
            (this->moduleAccessor,HVar9,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_GENERATE_ARTICLE_BAT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar7 = lib::L2CValue::operator__(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    FUN_7100021870(aLStack224,this,aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100021aa0);
  lib::L2CValue::operator_(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_7100022960(this);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_ESCAPE_AIR);
  uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack256,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLOAT_ESCAPE_AIR_DIR_X)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue
                (aLStack272,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_COMMON_FLOAT_ESCAPE_AIR_DIR_Y)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack256,fVar10);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack288,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack304,0x1ab3ee43e8);
      uVar7 = lib::L2CValue::as_integer(aLStack288);
      uVar8 = lib::L2CValue::as_integer(aLStack304);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack272,fVar10);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack288,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::operator_(aLStack256,aLStack272);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::operator_(aLStack96,aLStack272);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,Batwithin_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

