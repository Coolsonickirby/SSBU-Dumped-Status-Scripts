
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackWait_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  Hash40 HVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
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
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  iVar2 = lib::L2CValue::as_integer(this_00);
  bVar1 = app::FighterSpecializer_Tantan::is_status_kind_attack(iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    FUN_710005d640(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack176,true);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      return;
    }
    FUN_71000593f0(this);
    lib::L2CValue::L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128);
    FUN_71000627a0(aLStack176,this);
    lib::L2CValue::operator_(aLStack96,aLStack176);
    lib::L2CValue::operator_(aLStack112,aLStack160);
    lib::L2CValue::operator_(aLStack128,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack208,false);
    HVar4 = lib::L2CValue::as_hash(aLStack128);
    fVar6 = (float)lib::L2CValue::as_number(aLStack176);
    fVar7 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (this->moduleAccessor,iVar2,HVar4,0.0,1.0,false,false,0.0,true,true,false);
    goto LAB_710002e090;
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0x10b42070c0);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208,false);
  FUN_7100060550(aLStack224,this);
  lib::L2CValue::L2CValue(aLStack176,true);
  uVar3 = lib::L2CValue::operator__(aLStack224,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar3 & 1) != 0) {
    FUN_7100042d70(aLStack224,this);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  iVar2 = lib::L2CValue::as_integer(aLStack240);
  HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack176,HVar4);
  lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,aLStack128);
  FUN_7100062da0(aLStack176,aLStack240);
  lib::L2CValue::operator_(aLStack192,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack176,0x7fb997a80);
  uVar3 = lib::L2CValue::operator__(aLStack192,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::operator_(aLStack112,aLStack192);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    fVar6 = (float)app::lua_bind::MotionModule__frame_partial_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack176,fVar6);
    lib::L2CValue::operator_(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack176,true);
    lib::L2CValue::operator_(aLStack208,aLStack176);
LAB_710002de70:
    lib::L2CValue::_L2CValue(aLStack176);
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack176,HVar4);
    lib::L2CValue::operator_(aLStack128,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,aLStack128);
    FUN_7100062da0(aLStack176,aLStack256);
    lib::L2CValue::operator_(aLStack192,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack176,0x7fb997a80);
    uVar3 = lib::L2CValue::operator__(aLStack192,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator_(aLStack112,aLStack192);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
      iVar2 = lib::L2CValue::as_integer(aLStack272);
      fVar6 = (float)app::lua_bind::MotionModule__frame_partial_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack176,fVar6);
      lib::L2CValue::operator_(aLStack96,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack176,true);
      lib::L2CValue::operator_(aLStack208,aLStack176);
      goto LAB_710002de70;
    }
  }
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar3 = lib::L2CValue::operator__(aLStack208,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272);
    FUN_71000627a0(aLStack176,this);
    lib::L2CValue::operator_(aLStack128,aLStack176);
    lib::L2CValue::operator_(aLStack272,aLStack160);
    lib::L2CValue::operator_(aLStack192,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    iVar2 = lib::L2CValue::as_integer(aLStack272);
    HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack176,HVar4);
    uVar3 = lib::L2CValue::operator__(aLStack176,aLStack128);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar3 & 1) != 0) {
      iVar2 = lib::L2CValue::as_integer(aLStack272);
      fVar6 = (float)app::lua_bind::MotionModule__frame_partial_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack176,fVar6);
      lib::L2CValue::L2CValue(aLStack304,0xc1f106e8d);
      lib::L2CValue::L2CValue(aLStack320,0x149e257471);
      uVar3 = lib::L2CValue::as_integer(aLStack304);
      uVar5 = lib::L2CValue::as_integer(aLStack320);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar5);
      lib::L2CValue::L2CValue(aLStack288,iVar2);
      uVar3 = lib::L2CValue::operator__(aLStack176,aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::operator_(aLStack96,aLStack176);
        lib::L2CValue::operator_(aLStack112,aLStack192);
      }
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack272,false);
  HVar4 = lib::L2CValue::as_hash(aLStack112);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack272);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
LAB_710002e090:
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lua2cpp::L2CFighterCommon::sub_wait_ground_check_common_pre(this);
  lib::L2CValue::L2CValue(aLStack176,AttackWait_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

