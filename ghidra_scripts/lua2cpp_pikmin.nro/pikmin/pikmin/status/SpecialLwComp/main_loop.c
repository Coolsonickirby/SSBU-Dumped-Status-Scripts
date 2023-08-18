
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialLwComp_main_loop
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
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
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_ACTION_COMP_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100045e1c;
  }
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,*pfVar5);
  lib::L2CValue::L2CValue(aLStack160,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar5[2]);
  FUN_7100008920(aLStack128,this,aLStack176);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_TARGET_X);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_TARGET_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack224,fVar7);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  uVar8 = lib::L2CValue::as_number(this_00);
  uVar9 = lib::L2CValue::as_number(this_01);
  uVar10 = lib::L2CValue::as_number(this_02);
  local_60 = CONCAT44(uVar9,uVar8);
  uStack88 = (ulong)uVar10;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
  lib::L2CValue::L2CValue
            (aLStack256,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_FOLLOW);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack240,iVar3);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_HIDE_INDICATION);
  uVar4 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
LAB_7100045b60:
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
LAB_7100045b70:
    lib::L2CValue::L2CValue
              (aLStack256,
               _WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_HI_DISABLE_AIR_FOLLOW);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar4 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) {
LAB_7100045d5c:
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack288,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_CURRENT);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack272,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_AIR);
      uVar4 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack288);
        goto LAB_7100045d5c;
      }
      lib::L2CValue::L2CValue(aLStack320,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_AUTONOMY);
      iVar3 = lib::L2CValue::as_integer(aLStack320);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack304);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack240,0x157f040efe);
        HVar6 = lib::L2CValue::as_hash(aLStack240);
        iVar3 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar6,true,false,false,false,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::L2CValue(aLStack240,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_AIR_FOLLOW);
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100045e0c;
      }
    }
    lib::L2CValue::L2CValue(aLStack240,0x157f040efe);
    HVar6 = lib::L2CValue::as_hash(aLStack240);
    iVar3 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar6,true,false,false,false,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack288,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_CURRENT);
    iVar3 = lib::L2CValue::as_integer(aLStack288);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack272,iVar3);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_HIDE_INDICATION);
    uVar4 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      goto LAB_7100045b60;
    }
    lib::L2CValue::L2CValue(aLStack320,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_UNABLE_HIDE_WAIT)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack320);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack304);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((bVar2 & 1U) == 0) goto LAB_7100045b70;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_HIDE_WAIT);
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_7100045e0c:
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100045e1c:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

