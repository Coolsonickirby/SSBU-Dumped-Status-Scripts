
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPfushigisouSeed::status::Clash_main(L2CWeaponPfushigisouSeed *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  ulong local_c0;
  ulong uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x5672ed073);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_c0);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_c0);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x66933a7e6);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar7 = (float)app::sv_math::randf(HVar3,1.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar7);
  lib::L2CValue::L2CValue(aLStack128,0xaf685d131);
  lib::L2CValue::L2CValue(aLStack144,0xf684390a9);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144);
    pfVar6 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar6);
    lib::L2CValue::L2CValue(aLStack176,pfVar6[1]);
    lib::L2CValue::L2CValue(aLStack160,pfVar6[2]);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_c0);
    lib::L2CValue::operator_(aLStack128,aLStack176);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_PFUSHIGISOU_SEED_INSTANCE_WORK_ID_FLAG_KIRBY);
    iVar2 = lib::L2CValue::as_integer(aLStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x18a14c4598);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x1612046940);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    HVar3 = lib::L2CValue::as_hash(aLStack208);
    uVar4 = lib::L2CValue::as_number(aLStack112);
    lVar10 = lib::L2CValue::as_number(aLStack128);
    uVar9 = lib::L2CValue::as_number(aLStack144);
    local_c0 = uVar4 & 0xffffffff | lVar10 << 0x20;
    uStack184 = (ulong)uVar9;
    uStack88 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH;
    local_60 = ITEM_TRAIT_FLAG_SHOOT;
    uVar9 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar3,(Vector3f *)&local_c0,(Vector3f *)&local_60,1.0,0,
                       -1,false,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,Clash_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  return;
}

