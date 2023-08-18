
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponWiifitSunbullet::status::Shoot_main(L2CWeaponWiifitSunbullet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  undefined8 local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,
             GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT | _GROUND_TOUCH_FLAG_DOWN_LEFT |
             _GROUND_TOUCH_FLAG_DOWN_RIGHT | _GROUND_TOUCH_FLAG_UP);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_WIIFIT_SUNBULLET_INSTANCE_WORK_ID_FLAG_GROUND_TOUCH);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack208);
    fVar10 = (float)app::lua_bind::GroundModule__get_width_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    lib::L2CValue::L2CValue(aLStack208,0.5);
    lib::L2CValue::operator_(aLStack112,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack112);
    uVar7 = app::lua_bind::AttackModule__part_size_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,uVar7);
    lib::L2CValue::L2CValue(aLStack208,1);
    lib::L2CValue::operator_(aLStack112,aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if (-1 < iVar4) {
      iVar6 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack128,iVar6);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar5,false);
        lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack208,iVar6);
          iVar5 = lib::L2CValue::as_integer(aLStack208);
          fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
          app::lua_bind::AttackModule__set_size_impl(this->moduleAccessor,iVar5,fVar10);
          lib::L2CValue::_L2CValue(aLStack208);
        }
        bVar2 = iVar6 < iVar4;
        iVar6 = iVar6 + 1;
      } while (bVar2);
    }
    lib::L2CValue::L2CValue(aLStack208,2);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::StopModule__set_other_stop_impl(this->moduleAccessor,iVar4,0);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) != 0) {
    pfVar8 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,*pfVar8);
    lib::L2CValue::L2CValue(aLStack192,pfVar8[1]);
    lib::L2CValue::L2CValue(aLStack176,pfVar8[2]);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack208);
    lib::L2CValue::L2CValue(aLStack112,aLStack192);
    lib::L2CValue::L2CValue(aLStack128,aLStack176);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
    lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar9,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    uVar11 = lib::L2CValue::as_number(pLVar9);
    uVar12 = lib::L2CValue::as_number(this_00);
    uVar3 = lib::L2CValue::as_number(this_01);
    local_60 = CONCAT44(uVar12,uVar11);
    uStack88 = (ulong)uVar3;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_WIIFIT_SUNBULLET_INSTANCE_WORK_ID_FLAG_GROUND_TOUCH);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar7 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_MA_MSC_EFFECT_REQUEST_FOLLOW);
    lib::L2CValue::L2CValue(aLStack128,0x11a780394f);
    lib::L2CValue::L2CValue(aLStack160,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,1.0);
    lib::L2CValue::L2CValue(aLStack336,true);
    lib::L2CValue::L2CValue(aLStack352,_EFFECT_SUB_ATTRIBUTE_CONCLUDE_STATUS);
    lib::L2CValue::L2CValue(aLStack368,0);
    lib::L2CValue::L2CValue(aLStack384,-1);
    FUN_7100011f50(&local_60,this,aLStack112,aLStack128,aLStack160,aLStack224,aLStack240,aLStack256,
                   aLStack272,aLStack288,aLStack304,aLStack320,aLStack336,aLStack352,aLStack368,
                   aLStack384);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
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
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_WIIFIT_SUNBULLET_INSTANCE_WORK_ID_INT_EFFECT_ID_SHOT);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_71000266b0);
  lua2cpp::L2CFighterBase::shift(this,(L2CValue)0xa0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

