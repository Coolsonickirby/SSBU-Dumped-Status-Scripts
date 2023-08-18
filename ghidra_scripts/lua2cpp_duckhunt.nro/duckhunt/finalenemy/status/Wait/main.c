
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntFinalenemy::status::Wait_main
          (L2CWeaponDuckhuntFinalenemy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack80,0x47dee83e5);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,1.0);
  lib::L2CValue::L2CValue(aLStack208,false);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  fVar7 = (float)lib::L2CValue::as_number(aLStack176);
  fVar8 = (float)lib::L2CValue::as_number(aLStack192);
  bVar1 = lib::L2CValue::as_bool(aLStack208);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_A);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_B);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_C);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_D);
        uVar4 = lib::L2CValue::operator__(aLStack80,aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_7100028118;
        lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack176,0x10d27901cf);
        lVar5 = lib::L2CValue::as_integer(aLStack80);
        lVar6 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack176,0x1017de3f41);
        lVar5 = lib::L2CValue::as_integer(aLStack80);
        lVar6 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack176,0x10b1a934f5);
      lVar5 = lib::L2CValue::as_integer(aLStack80);
      lVar6 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
    lib::L2CValue::L2CValue(aLStack176,0x1080412e68);
    lVar5 = lib::L2CValue::as_integer(aLStack80);
    lVar6 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100028118:
  lib::L2CValue::L2CValue(aLStack80,Wait_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

