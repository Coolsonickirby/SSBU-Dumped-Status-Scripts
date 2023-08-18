
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntFinalenemy::status::Damage_main
          (L2CWeaponDuckhuntFinalenemy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack80,0x611c8546c);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_A);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_B);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_C);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_D);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) goto LAB_7100028948;
        lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack112,0xa2738bd58);
        lVar6 = lib::L2CValue::as_integer(aLStack80);
        lVar7 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar6,lVar7);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack112,0xab95c28fb);
        lVar6 = lib::L2CValue::as_integer(aLStack80);
        lVar7 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar6,lVar7);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack112,0xace5b186d);
      lVar6 = lib::L2CValue::as_integer(aLStack80);
      lVar7 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar6,lVar7);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
    lib::L2CValue::L2CValue(aLStack112,0xa575249d7);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    lVar7 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar6,lVar7);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100028948:
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_ROT_WAIT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Damage_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

