
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDemonBlaster::status::Fly_main(L2CWeaponDemonBlaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  float *pfVar6;
  L2CValue *pLVar7;
  Weapon *pWVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x56da96350);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_TYPE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_DEMON_BLASTER_TYPE_HI);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_TYPE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_DEMON_BLASTER_TYPE_LW);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_DEMON_BLASTER_TYPE_AIR_N);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack128,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue(aLStack176,_WEAPON_DEMON_BLASTER_TYPE_AIR_HI);
        uVar4 = lib::L2CValue::operator__(aLStack96,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::L2CValue(aLStack176,_WEAPON_DEMON_BLASTER_TYPE_AIR_LW);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack128,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_TYPE);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,iVar3);
            lib::L2CValue::L2CValue(aLStack176,_WEAPON_DEMON_BLASTER_TYPE_THROW);
            uVar4 = lib::L2CValue::operator__(aLStack96,aLStack176);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack176,0x56da96350);
              lib::L2CValue::operator_(aLStack112,aLStack176);
            }
            else {
              lib::L2CValue::L2CValue(aLStack176,0x943adc084);
              lib::L2CValue::operator_(aLStack112,aLStack176);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack176,0xa15d37579);
            lib::L2CValue::operator_(aLStack112,aLStack176);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,0xa8bb08d1e);
          lib::L2CValue::operator_(aLStack112,aLStack176);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,0x9e83c2120);
        lib::L2CValue::operator_(aLStack112,aLStack176);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,0x645539107);
      lib::L2CValue::operator_(aLStack112,aLStack176);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,0x6db306960);
    lib::L2CValue::operator_(aLStack112,aLStack176);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack176);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,*pfVar6);
    lib::L2CValue::L2CValue(aLStack160,pfVar6[1]);
    lib::L2CValue::L2CValue(aLStack144,pfVar6[2]);
    FUN_7100002430(aLStack128,this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_FLOAT_SHOT_EFFECT_POS_X);
    fVar9 = (float)lib::L2CValue::as_number(aLStack192);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_FLOAT_SHOT_EFFECT_POS_Y);
    fVar9 = (float)lib::L2CValue::as_number(aLStack192);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pWVar8 = (Weapon *)lib::L2CValue::as_pointer(pLVar7);
  app::WeaponSpecializer_DemonBlaster::set_beam_effect(pWVar8);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pWVar8 = (Weapon *)lib::L2CValue::as_pointer(pLVar7);
  app::WeaponSpecializer_DemonBlaster::set_shot_effect(pWVar8,false);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
  pWVar8 = (Weapon *)lib::L2CValue::as_pointer(pLVar7);
  app::WeaponSpecializer_DemonBlaster::set_head_effect(pWVar8);
  lib::L2CValue::L2CValue(aLStack96,true);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

