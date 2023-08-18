
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNess::status::SpecialHiHold_main_loop(L2CFighterNess *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_NESS_GENERATE_ARTICLE_PK_THUNDER);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack112);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack368,_FIGHTER_NESS_STATUS_SPECIAL_HI_FLAG_THUNDER_VANISH);
    iVar3 = lib::L2CValue::as_integer(aLStack368);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack352,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack352);
    if ((bVar2 & 1U) != 0) {
      bVar2 = true;
      goto LAB_71000171a8;
    }
    uVar4 = 0;
LAB_7100017288:
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack368);
  }
  else {
    bVar2 = false;
LAB_71000171a8:
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_INT_TIME);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_INT_STOP_TIME);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
      uVar4 = uVar4 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if (bVar2) goto LAB_7100017288;
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_STATUS_KIND_SPECIAL_HI_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar3 = 1;
    goto LAB_7100017648;
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack384,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_INT_WAIT_MTRANS_KIND);
    FUN_7100010240(aLStack96,this,aLStack384);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) goto LAB_7100017370;
  }
  else {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100017370:
    lib::L2CValue::L2CValue(aLStack400,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_INT_WAIT_MTRANS_KIND);
    lib::L2CValue::L2CValue(aLStack416,_FIGHTER_NESS_STATUS_SPECIAL_HI_FLAG_MOT_CHANGE);
    lib::L2CValue::L2CValue(aLStack432,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    lib::L2CValue::L2CValue(aLStack448,_FIGHTER_KINETIC_TYPE_NESS_AIR_STOP_X_NORMAL_MAX_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack464,0xf560f55fa);
    lib::L2CValue::L2CValue(aLStack480,0x135d96d82e);
    lib::L2CValue::L2CValue(aLStack496,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
    FUN_7100011890(this,aLStack400,aLStack416,aLStack432,aLStack448,aLStack464,aLStack480,aLStack496
                  );
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_NESS_LINK_NO_PK_THUNDER);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_INT_HIT_STEP);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_NESS_PK_THUNDER_HIT_STATUS_NONE);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_NESS_PK_THUNDER_HIT_STATUS_NEVERHIT);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_FLOAT_UD);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_FLOAT_DIR);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_NESS_STATUS_SPECIAL_HI_FLAG_ATTACK_AIR);
  lib::L2CValue::L2CValue(aLStack192,0xcdecdc00d);
  lib::L2CValue::L2CValue(aLStack208,0xcd16a7bf2);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_NESS_STATUS_KIND_SPECIAL_HI_REFLECT);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_NESS_STATUS_SPECIAL_HI_FLAG_REFLECT_GROUND);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_NESS_STATUS_KIND_SPECIAL_HI_ATTACK);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_NESS_PK_THUNDER_HIT_STATUS_HIT);
  lib::L2CValue::L2CValue(aLStack288,0xd4635c187);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_NESS_STATUS_SPECIAL_HI_WORK_INT_GUIDE_EFFECT_HANDLE);
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_NESS_GENERATE_ARTICLE_PK_THUNDER);
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_NESS_STATUS_SPECIAL_HI_FLAG_THUNDER_VANISH);
  FUN_71000178f0(this,aLStack80,aLStack96,aLStack112,aLStack128,aLStack144,aLStack160,aLStack176,
                 aLStack192,aLStack208,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,
                 aLStack304,aLStack320,aLStack336);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
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
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar3 = 0;
LAB_7100017648:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

