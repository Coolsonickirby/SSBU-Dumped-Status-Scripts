
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponInklingSplashbomb::status::Explode_main
          (L2CWeaponInklingSplashbomb *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  Hash40 HVar5;
  float *pfVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  ulong local_d0;
  BattleObject *pBStack200;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0x754732c8d);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,true);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_d0);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  uVar3 = lib::L2CValue::as_bool(aLStack128);
  pLVar8 = (L2CValue *)(ulong)(uVar3 & 1);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar9,fVar10,SUB41(uVar3 & 1,0),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_d0);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,*pfVar6);
  lib::L2CValue::L2CValue(aLStack192,pfVar6[1]);
  lib::L2CValue::L2CValue(aLStack176,pfVar6[2]);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_d0);
  lib::L2CValue::operator_(aLStack144,aLStack192);
  lib::L2CValue::operator_(aLStack160,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,5);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack224,aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    pfVar6 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,*pfVar6);
    lib::L2CValue::L2CValue(aLStack192,pfVar6[1]);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_d0);
    lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::operator_((L2CValue *)auStack256,(L2CValue *)&local_d0);
    lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar7 = (L2CValue *)(auStack288 + 0x10);
    lib::L2CAgent::math_atan((L2CAgent *)auStack256,pLVar7,pLVar8);
    lib::L2CAgent::math_deg((L2CAgent *)auStack288,pLVar7);
    lib::L2CValue::L2CValue(aLStack112,0x18c19c7ee8);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack288);
    HVar5 = lib::L2CValue::as_hash(aLStack112);
    uVar13 = lib::L2CValue::as_number(aLStack224);
    lVar14 = lib::L2CValue::as_number((L2CValue *)(auStack256 + 0x10));
    uVar3 = lib::L2CValue::as_number(aLStack160);
    local_d0 = uVar13 & 0xffffffff | lVar14 << 0x20;
    pBStack200 = (BattleObject *)(ulong)uVar3;
    uVar13 = lib::L2CValue::as_number(aLStack336);
    lVar14 = lib::L2CValue::as_number(aLStack352);
    uVar3 = lib::L2CValue::as_number(aLStack368);
    local_60 = uVar13 & 0xffffffff | lVar14 << 0x20;
    uStack88 = (ulong)uVar3;
    uVar3 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar5,(Vector3f *)&local_d0,(Vector3f *)&local_60,1.0,0,
                       -1,false,0);
    lib::L2CValue::L2CValue(aLStack320,uVar3);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack336,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLOAT_R);
    lib::L2CValue::L2CValue(aLStack352,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLOAT_G);
    lib::L2CValue::L2CValue(aLStack368,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLOAT_B);
    iVar4 = lib::L2CValue::as_integer(aLStack336);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,fVar9);
    iVar4 = lib::L2CValue::as_integer(aLStack352);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
    iVar4 = lib::L2CValue::as_integer(aLStack368);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
    fVar11 = (float)lib::L2CValue::as_number(aLStack112);
    app::lua_bind::EffectModule__set_rgb_partial_last_impl(this->moduleAccessor,fVar9,fVar10,fVar11)
    ;
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)auStack288);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0x10eaa9bff4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_d0);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::ControlModule__set_rumble_impl(this->moduleAccessor,HVar5,iVar4,false,0x50000000);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,Explode_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}
