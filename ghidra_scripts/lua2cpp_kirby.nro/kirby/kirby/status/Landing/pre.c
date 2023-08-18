
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::Landing_pre(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack272,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack384,iVar3);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KIND_PICKEL);
    uVar4 = lib::L2CValue::operator__(aLStack384,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_pre_landing(this);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_LANDING_FLAG);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_LANDING_INT);
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_STATUS_WORK_KEEP_FLAG_LANDING_FLOAT);
        lua2cpp::L2CFighterCommon::sub_pre_landing_kinetic_type(this);
        lib::L2CValue::L2CValue(aLStack176,0);
        FUN_7100223070(aLStack192,this);
        lib::L2CValue::L2CValue(aLStack272,true);
        uVar4 = lib::L2CValue::operator__(aLStack192,aLStack272);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack192,aLStack176);
          FUN_7100222eb0(aLStack272,aLStack192);
          lib::L2CValue::operator_(aLStack112,aLStack272);
          lib::L2CValue::operator_(aLStack128,aLStack256);
          lib::L2CValue::operator_(aLStack144,aLStack240);
          lib::L2CValue::operator_(aLStack160,aLStack224);
          lib::L2CValue::operator_(aLStack176,aLStack208);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack240);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        lib::L2CValue::L2CValue(aLStack272,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                 (this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack288,fVar6);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::L2CValue(aLStack304,false);
        this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
        lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_LADDER);
        uVar4 = lib::L2CValue::operator__(this_00,aLStack272);
        lib::L2CValue::_L2CValue(aLStack272);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue
                    (aLStack320,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_LANDING_HIGH_PLACE_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack320);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack272,iVar3);
          lib::L2CValue::L2CValue(aLStack352,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack368,0x18fc0e91ae);
          uVar4 = lib::L2CValue::as_integer(aLStack352);
          uVar5 = lib::L2CValue::as_integer(aLStack368);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack336,iVar3);
          uVar4 = lib::L2CValue::operator__(aLStack336,aLStack272);
          lib::L2CValue::_L2CValue(aLStack336);
          lib::L2CValue::_L2CValue(aLStack368);
          lib::L2CValue::_L2CValue(aLStack352);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack320);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack272,true);
            lib::L2CValue::operator_(aLStack304,aLStack272);
            lib::L2CValue::_L2CValue(aLStack272);
          }
        }
        lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PICKEL_STATUS_LANDING_FLAG_HIGH_PLACE);
        bVar1 = lib::L2CValue::as_bool(aLStack304);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar3);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::L2CValue(aLStack272,aLStack112);
        lib::L2CValue::L2CValue(aLStack320,aLStack128);
        lib::L2CValue::L2CValue(aLStack336,aLStack144);
        lib::L2CValue::L2CValue(aLStack352,aLStack160);
        lib::L2CValue::L2CValue(aLStack368,aLStack176);
        lua2cpp::L2CFighterCommon::status_pre_Landing_param
                  (this,(L2CValue)0xf0,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      lib::L2CValue::_L2CValue(aLStack384);
      return;
    }
    lib::L2CValue::_L2CValue(aLStack384);
  }
  lua2cpp::L2CFighterCommon::status_pre_Landing(this);
  return;
}

