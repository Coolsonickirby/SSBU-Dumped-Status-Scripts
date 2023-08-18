
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PacmanSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  FighterModuleAccessor *pFVar9;
  ulong uVar10;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
LAB_7100191df0:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        FUN_710018dd50(this);
        lib::L2CValue::L2CValue(aLStack80,0x915c5de42);
        HVar8 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                  (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
        goto LAB_7100191ea4;
      }
    }
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) goto LAB_7100191df0;
    FUN_710018e970(this);
    lib::L2CValue::L2CValue(aLStack80,0xd483c0ed2);
    HVar8 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
              (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
LAB_7100191ea4:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_710019230c;
  }
  lib::L2CValue::L2CValue(aLStack80,0x27becd9186);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TARGET_NUM);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack80,iVar5);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  bVar3 = app::FighterSpecializer_Pacman::check_have_fruit_target(pFVar9);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0xe06035549);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    uVar10 = lib::L2CValue::as_integer(aLStack144);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar10);
    lib::L2CValue::L2CValue(aLStack80,iVar5);
    uVar7 = lib::L2CValue::operator__(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      bVar3 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar3 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PACMAN_SPECIAL_N_HOLD);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x70));
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PACMAN_SPECIAL_N_HOLD);
        lib::L2CValue::L2CValue(aLStack128,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x70));
      }
      goto LAB_7100191fec;
    }
    lib::L2CValue::L2CValue(aLStack128,0x5e008fd84);
    iVar5 = FIGHTER_KIND_KIRBY;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
    lib::L2CValue::L2CValue(aLStack80,iVar5);
    uVar7 = lib::L2CValue::operator__(aLStack80,pLVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x5eb263e0d);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack144,_MA_MSC_CMD_EFFECT_EFFECT);
    lib::L2CValue::L2CValue(aLStack160,0x113ac0adb6);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,false);
    FUN_71001925b0(aLStack80,this,aLStack144,aLStack160,aLStack128,aLStack176,aLStack192,aLStack208,
                   aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,aLStack304,aLStack320,
                   aLStack336,aLStack352,aLStack368,aLStack384);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
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
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_KIND_PACMAN_SPECIAL_N_CANCEL);
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x80),(L2CValue)(cVar1 + 'p'));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lVar2 = -0x70;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PACMAN_SPECIAL_N_HOLD);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x70))
    ;
LAB_7100191fec:
    lib::L2CValue::_L2CValue(aLStack128);
    lVar2 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
LAB_710019230c:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

