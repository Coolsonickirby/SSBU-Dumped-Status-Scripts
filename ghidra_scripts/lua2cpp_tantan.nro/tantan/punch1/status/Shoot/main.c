
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanPunch1::status::Shoot_main(L2CWeaponTantanPunch1 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_TANTAN_PUNCH1_INSTANCE_WORK_ID_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,lVar5);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_TANTAN_PUNCH1_INSTANCE_WORK_ID_FLAG_IS_KIRBY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_INSTANCE_WORK_ID_INT_ACTIVATE_FOUNDER_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0x50000000);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) == 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                        (FIGHTER_INSTANCE_WORK_ID_INT_SCALING_STATUS,uVar4);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) != 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar7 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
          ;
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,pvVar7);
        }
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
        uVar12 = app::lua_bind::GroundModule__center_pos_impl(pBVar8);
        lib::L2CValue::L2CValue(aLStack192,(float)uVar12);
        lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar12 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack192);
        lib::L2CValue::L2CValue(aLStack96,aLStack176);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        uVar6 = lib::L2CValue::as_number(this_00);
        uVar4 = lib::L2CValue::as_number(this_01);
        local_50 = uVar6 & 0xffffffff | (ulong)uVar4 << 0x20;
        uStack72 = 0;
        app::lua_bind::GroundModule__set_shape_safe_pos_impl
                  (this->moduleAccessor,(Vector2f *)&local_50);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
      }
    }
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar9 = lib::L2CValue::as_hash(aLStack112);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  fVar11 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,Shoot_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

