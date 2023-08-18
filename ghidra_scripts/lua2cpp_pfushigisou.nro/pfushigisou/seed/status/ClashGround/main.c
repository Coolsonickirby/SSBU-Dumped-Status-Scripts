
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPfushigisouSeed::status::ClashGround_main
          (L2CWeaponPfushigisouSeed *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  ulong uStack192;
  ulong uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 uStack96;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack192,0xc4972ecad);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&uStack192);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&uStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack192);
  lib::L2CValue::L2CValue((L2CValue *)&uStack192,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&uStack192);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&uStack192);
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&uStack192,*pfVar4);
  lib::L2CValue::L2CValue(aLStack176,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar4[2]);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&uStack192);
  lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack192);
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_PFUSHIGISOU_SEED_INSTANCE_WORK_ID_FLAG_KIRBY);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&uStack192,false);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&uStack96,(L2CValue *)&uStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&uStack192,0x18a14c4598);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&uStack192);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&uStack192,0x1612046940);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&uStack192);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&uStack192);
  HVar3 = lib::L2CValue::as_hash(aLStack208);
  uVar5 = lib::L2CValue::as_number(aLStack112);
  lVar9 = lib::L2CValue::as_number(aLStack128);
  uVar8 = lib::L2CValue::as_number(aLStack144);
  uStack192 = uVar5 & 0xffffffff | lVar9 << 0x20;
  uStack184 = (ulong)uVar8;
  uStack88 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_CATCH;
  uStack96 = ITEM_TRAIT_FLAG_SHOOT;
  uVar8 = app::lua_bind::EffectModule__req_impl
                    (this->moduleAccessor,HVar3,(Vector3f *)&uStack192,(Vector3f *)&uStack96,1.0,0,
                     -1,false,0);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,uVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::L2CValue((L2CValue *)&uStack192,ClashGround_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

