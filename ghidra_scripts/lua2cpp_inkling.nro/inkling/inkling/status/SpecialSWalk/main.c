
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSWalk_main(L2CFighterInkling *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_710001cb10(this);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_WALK_JOSTLE_FRONT);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_WALK_JOSTLE_BACK);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::_L2CValue(aLStack144);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::FighterAreaModuleImpl__enable_fix_jostle_area_impl
              (this->moduleAccessor,fVar7,fVar8);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,true);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_SPECIAL_S);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_WALK_TURN);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710000b710;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN_TURN);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710000b710;
  }
  else {
LAB_710000b710:
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  FUN_7100006390(aLStack144,this);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x1419c4c496);
    lib::L2CValue::L2CValue(aLStack160,0x186bb4295d);
    lib::L2CValue::L2CValue(aLStack176,aLStack128);
    FUN_710001cbc0(this,aLStack144,aLStack160,aLStack176);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0xe2b956c37);
    lib::L2CValue::L2CValue(aLStack160,0x1269c799f8);
    lib::L2CValue::L2CValue(aLStack176,aLStack128);
    FUN_710001cbc0(this,aLStack144,aLStack160,aLStack176);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  fVar7 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar7);
  fVar7 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::L2CValue(aLStack224,true);
  lib::L2CValue::L2CValue(aLStack240,0xde837a165);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x11085a024c);
    lib::L2CValue::operator_(aLStack240,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,1.0);
  HVar6 = lib::L2CValue::as_hash(aLStack240);
  fVar7 = (float)lib::L2CValue::as_number(aLStack192);
  fVar8 = (float)lib::L2CValue::as_number(aLStack208);
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  app::lua_bind::MotionModule__add_motion_2nd_impl
            (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),fVar9);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar7,true);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar7 = (float)lib::L2CValue::as_number(aLStack208);
  app::lua_bind::MotionModule__set_rate_2nd_impl(this->moduleAccessor,fVar7);
  FUN_7100005bd0(aLStack256,this);
  lib::L2CValue::_L2CValue(aLStack256);
  FUN_7100006390(aLStack272,this);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator__(aLStack272,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack272,0x48d917a55);
    lib::L2CValue::L2CValue(aLStack288,0x8373127e3);
    lib::L2CValue::L2CValue(aLStack304,false);
    FUN_710001cfc0(this,aLStack272,aLStack288);
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,0xbbc1a51c5);
    lib::L2CValue::L2CValue(aLStack288,0xbbc1a51c5);
    lib::L2CValue::L2CValue(aLStack304,false);
    FUN_710001cfc0(this,aLStack272,aLStack288);
  }
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
  lib::L2CValue::L2CValue(aLStack320,_WEAPON_INKLING_ROLLER_STATUS_KIND_WALK);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack320);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack352,true);
  FUN_7100028200(this,aLStack320,aLStack336,aLStack352);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack368,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator__(aLStack368,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack368);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack384,false);
    FUN_7100028670(aLStack368,this,aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue(aLStack112,&DAT_7100028730);
  lib::L2CValue::operator_(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_7100006390(aLStack400,this);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar5 = lib::L2CValue::operator__(aLStack400,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack416,0x169d8e2182);
    HVar6 = lib::L2CValue::as_hash(aLStack416);
    bVar1 = app::lua_bind::SoundModule__is_playing_impl(this->moduleAccessor,HVar6);
    lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,true);
    uVar5 = lib::L2CValue::operator__(aLStack400,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack416);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x169d8e2182);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar6,0);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack416,0x1603eab421);
    HVar6 = lib::L2CValue::as_hash(aLStack416);
    bVar1 = app::lua_bind::SoundModule__is_playing_impl(this->moduleAccessor,HVar6);
    lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator__(aLStack400,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack416);
    if ((uVar5 & 1) == 0) goto LAB_710000bdf0;
    lib::L2CValue::L2CValue(aLStack400,0x1603eab421);
    HVar6 = lib::L2CValue::as_hash(aLStack400);
    iVar2 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar6,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack416,0x169d8e2182);
    HVar6 = lib::L2CValue::as_hash(aLStack416);
    bVar1 = app::lua_bind::SoundModule__is_playing_impl(this->moduleAccessor,HVar6);
    lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack112,false);
    uVar5 = lib::L2CValue::operator__(aLStack400,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack416);
    if ((uVar5 & 1) == 0) goto LAB_710000bdf0;
    lib::L2CValue::L2CValue(aLStack400,0x169d8e2182);
    HVar6 = lib::L2CValue::as_hash(aLStack400);
    iVar2 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar6,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack400);
LAB_710000bdf0:
  lib::L2CValue::L2CValue(aLStack400,SpecialSWalk_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

