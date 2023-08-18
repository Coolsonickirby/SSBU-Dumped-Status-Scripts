
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKoopaKoopag::status::Attack_main(L2CWeaponKoopaKoopag *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xc4135d08b);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0x132c14e53d);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  HVar4 = lib::L2CValue::as_hash(aLStack128);
  uVar8 = lib::L2CValue::as_number(aLStack144);
  lVar9 = lib::L2CValue::as_number(aLStack160);
  uVar7 = lib::L2CValue::as_number(aLStack176);
  local_50 = uVar8 & 0xffffffff | lVar9 << 0x20;
  uStack72 = (ulong)uVar7;
  uStack88 = _MA_MSC_CMD_ITEM_IS_GET_PICKABLE_ITEM;
  local_60 = FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_PICKUP_LIGHT;
  uVar7 = app::lua_bind::EffectModule__req_2d_impl
                    (this->moduleAccessor,HVar4,(Vector3f *)&local_50,(Vector3f *)&local_60,1.0,0);
  lib::L2CValue::L2CValue(aLStack112,uVar7);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,100.0);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_INT_ATTACK_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_((L2CValue *)&local_50,(L2CValue *)&local_60);
  fVar5 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::EffectModule__set_rate_last_impl(this->moduleAccessor,fVar5);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_INT_SIGHT_EFFECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_710001d240(this);
  lib::L2CValue::L2CValue(aLStack144,0x1018ead674);
  HVar4 = lib::L2CValue::as_hash(aLStack144);
  iVar2 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar4,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLAG_ATTACK_HIT);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLAG_REQUEST_RUMBLE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,Attack_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

