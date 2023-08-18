
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSonicGimmickjump::status::Fall_main_loop
          (L2CWeaponSonicGimmickjump *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_SONIC_GIMMICKJUMP_INSTANCE_WORK_FLAG_FALL_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_SONIC_GIMMICKJUMP_STATUS_KIND_REMOVE);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          goto LAB_710002399c;
        }
      }
      iVar3 = 0;
      goto LAB_71000239b4;
    }
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_SONIC_GIMMICKJUMP_STATUS_KIND_BOUND);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
LAB_710002399c:
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x14321a4cf2);
    HVar7 = lib::L2CValue::as_hash(aLStack80);
    iVar3 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar7,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_SONIC_GIMMICKJUMP_STATUS_KIND_BOUND);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar5);
  iVar3 = 1;
LAB_71000239b4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

