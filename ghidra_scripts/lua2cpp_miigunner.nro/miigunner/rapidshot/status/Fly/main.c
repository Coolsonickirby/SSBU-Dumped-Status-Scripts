
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiigunnerRapidshot::status::Fly_main
          (L2CWeaponMiigunnerRapidshot *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *this_00;
  int iVar7;
  float fVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100042ca0(aLStack96,this);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    fVar8 = (float)app::lua_bind::GroundModule__get_width_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::L2CValue(aLStack80,0.5);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    uVar6 = app::lua_bind::AttackModule__part_size_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,uVar6);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if (-1 < iVar4) {
      iVar7 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack128,iVar7);
        iVar5 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar5,false);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,iVar7);
          iVar5 = lib::L2CValue::as_integer(aLStack80);
          fVar8 = (float)lib::L2CValue::as_number(aLStack96);
          app::lua_bind::AttackModule__set_size_impl(this->moduleAccessor,iVar5,fVar8);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        bVar2 = iVar7 < iVar4;
        iVar7 = iVar7 + 1;
      } while (bVar2);
    }
    lib::L2CValue::L2CValue(aLStack80,2);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::StopModule__set_other_stop_impl(this->moduleAccessor,iVar4,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_MIIGUNNER_RAPIDSHOT_BULLET_INSTANCE_WORK_ID_FLAG_GROUND_TOUCH);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    FUN_7100042e50(aLStack96,this,aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100042fc0);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Fly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

