
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::BuddySpecialNShootJumpSquat_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  Fighter *pFVar8;
  float fVar9;
  float fVar10;
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
  
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_71001467f0(aLStack128,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_7100146cb0(this);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::operator_(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    HVar7 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack176,HVar7);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack192,aLStack160);
      FUN_7100147af0(aLStack112,this,aLStack192);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) != 0) {
        fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,fVar9);
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
        lib::L2CValue::L2CValue(aLStack224,0x1a5c0b8105);
        lib::L2CValue::L2CValue(aLStack240,1.0);
        lib::L2CValue::L2CValue(aLStack256,false);
        lib::L2CValue::L2CValue(aLStack272,false);
        iVar4 = lib::L2CValue::as_integer(aLStack208);
        HVar7 = lib::L2CValue::as_hash(aLStack224);
        fVar9 = (float)lib::L2CValue::as_number(aLStack112);
        fVar10 = (float)lib::L2CValue::as_number(aLStack240);
        bVar1 = lib::L2CValue::as_bool(aLStack256);
        bVar3 = lib::L2CValue::as_bool(aLStack272);
        app::lua_bind::FighterMotionModuleImpl__add_motion_partial_kirby_copy_impl
                  (this->moduleAccessor,iVar4,HVar7,fVar9,fVar10,(bool)(bVar1 & 1),(bool)(bVar3 & 1)
                   ,0.0,true,true,false);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
        pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
        app::FighterSpecializer_Buddy::update_special_n_partner_motion(pFVar8,false);
        lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK)
        ;
        iVar4 = lib::L2CValue::as_integer(aLStack208);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x2034fd9b5c);
      uVar6 = lib::L2CValue::operator__(aLStack176,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_JUMP);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_AIR);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x40);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack176);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_BUDDY_SPECIAL_N_SHOOT_FALL);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

