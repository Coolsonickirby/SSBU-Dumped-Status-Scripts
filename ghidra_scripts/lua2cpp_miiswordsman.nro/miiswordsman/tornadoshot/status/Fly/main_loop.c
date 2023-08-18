
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiiswordsmanTornadoshot::status::Fly_main_loop
          (L2CWeaponMiiswordsmanTornadoshot *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  Hash40 HVar7;
  uint uVar8;
  long lVar9;
  int in_stack_fffffffffffffef4;
  undefined in_stack_fffffffffffffefc;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_MIISWORDSMAN_TORNADOSHOT_INSTANCE_WORK_ID_INT_PREV_STATUS
            );
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) goto LAB_71000439d8;
    lib::L2CValue::L2CValue(aLStack128,0x1a712fd786);
    lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,-4.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    HVar6 = lib::L2CValue::as_hash(aLStack128);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    uVar5 = lib::L2CValue::as_number(aLStack160);
    lVar9 = lib::L2CValue::as_number(aLStack176);
    uVar8 = lib::L2CValue::as_number(aLStack192);
    local_50 = uVar5 & 0xffffffff | lVar9 << 0x20;
    uStack72 = (ulong)uVar8;
    uStack88 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_N;
    local_60 = FIGHTER_STATUS_TRANSITION_TERM_ID_FINAL;
    uVar8 = app::lua_bind::EffectModule__req_follow_impl
                      (this->moduleAccessor,HVar6,HVar7,(Vector3f *)&local_50,(Vector3f *)&local_60,
                       1.0,false,0,0,-1,in_stack_fffffffffffffef4,0,(bool)in_stack_fffffffffffffefc,
                       false);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_MIISWORDSMAN_TORNADOSHOT_INSTANCE_WORK_ID_INT_PREV_STATUS);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lVar9 = -0x70;
  }
  else {
LAB_71000439d8:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) goto LAB_7100043b18;
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) goto LAB_7100043b18;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1a712fd786);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_50);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
    bVar2 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::EffectModule__kill_kind_impl
              (this->moduleAccessor,HVar6,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,
               _WEAPON_MIISWORDSMAN_TORNADOSHOT_INSTANCE_WORK_ID_INT_PREV_STATUS);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lVar9 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar9));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_7100043b18:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

