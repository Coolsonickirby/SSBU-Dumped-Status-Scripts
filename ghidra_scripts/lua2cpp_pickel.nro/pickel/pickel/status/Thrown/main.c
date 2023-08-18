
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPickel::status::Thrown_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  BattleObjectModuleAccessor *pBVar11;
  Hash40 HVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [24];
  
  lua2cpp::L2CFighterCommon::status_Thrown_common(this);
  lib::L2CValue::L2CValue(aLStack152,0);
  uVar8 = lib::L2CValue::operator__(aLStack152,aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack184);
    lib::L2CValue::L2CValue(aLStack200);
    lib::L2CValue::L2CValue(aLStack152,1);
    uVar8 = lib::L2CValue::operator__(aLStack168,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack152,2);
      uVar8 = lib::L2CValue::operator__(aLStack168,aLStack152);
      lib::L2CValue::_L2CValue(aLStack152);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack152,3);
        uVar8 = lib::L2CValue::operator__(aLStack168,aLStack152);
        lib::L2CValue::_L2CValue(aLStack152);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack152,0x1426fde3f0);
          lib::L2CValue::operator_(aLStack184,aLStack152);
          lib::L2CValue::_L2CValue(aLStack152);
          lib::L2CValue::L2CValue(aLStack152,0x1b4e11990f);
          lib::L2CValue::operator_(aLStack200,aLStack152);
        }
        else {
          lib::L2CValue::L2CValue(aLStack152,0x155b17ec67);
          lib::L2CValue::operator_(aLStack184,aLStack152);
          lib::L2CValue::_L2CValue(aLStack152);
          lib::L2CValue::L2CValue(aLStack152,0x1ca390a1e5);
          lib::L2CValue::operator_(aLStack200,aLStack152);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack152,0x15c5741400);
        lib::L2CValue::operator_(aLStack184,aLStack152);
        lib::L2CValue::_L2CValue(aLStack152);
        lib::L2CValue::L2CValue(aLStack152,0x1cf4dd8494);
        lib::L2CValue::operator_(aLStack200,aLStack152);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack152,0x14219027e9);
      lib::L2CValue::operator_(aLStack184,aLStack152);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::L2CValue(aLStack152,0x1b8ea8f399);
      lib::L2CValue::operator_(aLStack200,aLStack152);
    }
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack232,LINK_NO_CAPTURE);
    iVar6 = lib::L2CValue::as_integer(aLStack232);
    uVar7 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar6,true);
    lib::L2CValue::L2CValue(aLStack152,uVar7);
    uVar7 = lib::L2CValue::as_integer(aLStack152);
    pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar7);
    if (pvVar9 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack216,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack216,pvVar9);
    }
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::L2CValue(aLStack152,0xcad2ee25e);
    uVar8 = lib::L2CValue::as_integer(aLStack152);
    uVar10 = lib::L2CValue::as_integer(aLStack184);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack216);
    iVar6 = app::lua_bind::WorkModule__get_param_int_impl(pBVar11,uVar8,uVar10);
    lib::L2CValue::L2CValue(aLStack232,iVar6);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack248);
    lib::L2CValue::L2CValue(aLStack152,1);
    uVar8 = lib::L2CValue::operator__(aLStack232,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack152,0xbcd0a0931);
      lib::L2CValue::operator_(aLStack248,aLStack152);
    }
    else {
      lib::L2CValue::L2CValue(aLStack152,0xc53691dc4);
      lib::L2CValue::operator_(aLStack248,aLStack152);
    }
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack264,0.0);
    lib::L2CValue::L2CValue(aLStack280,1.0);
    lib::L2CValue::L2CValue(aLStack296,false);
    lib::L2CValue::L2CValue(aLStack312,false);
    lib::L2CValue::L2CValue(aLStack328,0.0);
    lib::L2CValue::L2CValue(aLStack344,false);
    lib::L2CValue::L2CValue(aLStack360,true);
    lib::L2CValue::L2CValue(aLStack376,true);
    iVar6 = lib::L2CValue::as_integer(aLStack152);
    HVar12 = lib::L2CValue::as_hash(aLStack248);
    fVar13 = (float)lib::L2CValue::as_number(aLStack264);
    fVar14 = (float)lib::L2CValue::as_number(aLStack280);
    bVar1 = lib::L2CValue::as_bool(aLStack296);
    bVar2 = lib::L2CValue::as_bool(aLStack312);
    fVar15 = (float)lib::L2CValue::as_number(aLStack328);
    bVar3 = lib::L2CValue::as_bool(aLStack344);
    bVar4 = lib::L2CValue::as_bool(aLStack360);
    bVar5 = lib::L2CValue::as_bool(aLStack376);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (this->moduleAccessor,iVar6,HVar12,fVar13,fVar14,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
               fVar15,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
    lib::L2CValue::_L2CValue(aLStack376);
    lib::L2CValue::_L2CValue(aLStack360);
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,0xcad2ee25e);
    uVar8 = lib::L2CValue::as_integer(aLStack152);
    uVar10 = lib::L2CValue::as_integer(aLStack200);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack216);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar11,uVar8,uVar10);
    lib::L2CValue::L2CValue(aLStack264,fVar13);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,0.0);
    uVar8 = lib::L2CValue::operator__(aLStack264,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar8 & 1) == 0) {
      uVar7 = app::lua_bind::LinkModule__get_model_constraint_flag_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack280,uVar7);
      lib::L2CValue::L2CValue(aLStack152,CONSTRAINT_FLAG_OFFSET_ROT);
      lib::L2CValue::operator_(aLStack280,aLStack152);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::operator_(aLStack280,aLStack296);
      lib::L2CValue::_L2CValue(aLStack296);
      uVar7 = lib::L2CValue::as_integer(aLStack280);
      app::lua_bind::LinkModule__set_model_constraint_flag_impl(this->moduleAccessor,uVar7);
      fVar13 = (float)lib::L2CValue::as_number(aLStack264);
      app::lua_bind::LinkModule__set_constraint_rot_offset_x_impl(this->moduleAccessor,fVar13);
      lib::L2CValue::_L2CValue(aLStack280);
    }
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack200);
    lib::L2CValue::_L2CValue(aLStack184);
  }
  lib::L2CValue::L2CValue(aLStack152,Thrown_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x68);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack168);
  return;
}

